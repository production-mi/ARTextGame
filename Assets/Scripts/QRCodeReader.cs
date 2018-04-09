using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.iOS;

	public class QRCodeReader : MonoBehaviour {
	private IntPtr cvPixelBufferPtr;
	public static bool IsDetecting;
	public static String possible;



	#if UNITY_IPHONE && !UNITY_EDITOR

		[DllImport ("__Internal")]
		private static extern void ReadQRCode(long mtlTexPtr);

		[DllImport ("__Internal")]
		private static extern void ReadBuffer(IntPtr cvPixelBufferPtr);

		[DllImport ("__Internal")]
		private static extern void GetQRCodeCorners(out IntPtr cornersPtr);

		private static float[] GetQRCodeCorners() {
			IntPtr cornersPtr;
			GetQRCodeCorners (out cornersPtr);
			float[] corners = new float[8];
			Marshal.Copy (cornersPtr, corners, 0, 8);
			return corners;
		}

		[DllImport ("__Internal")]
		private static extern IntPtr GetPossibleName(out IntPtr possibleName);

		private static string GetPossibleName(){
				 IntPtr possibleNamePtr;

				 possibleNamePtr = GetPossibleName(out possibleNamePtr);
				 String possibleName = Marshal.PtrToStringAnsi(possibleNamePtr);

				 // メモリの解放
				 Marshal.FreeHGlobal(possibleNamePtr);

				 return possibleName;
		 }

		// [DllImport ("__Internal")]
		// private static extern void GetPossibleName(out Char possibleName);
	  //
		// private static char[] GetPossibleName(){
		// 	Char possibleName;
		// 	GetPossibleName(out possibleName);
		// 	char[] name;
		// 	name = possibleName.ToCharArray();
		// 	return name;
		// }
	  //
		// [DllImport ("__Internal")]
		// private static extern void GetPossibleName(out String possibleName);
	  //
		// private static string GetPossibleName(){
		// 	String possibleName;
		// 	GetPossibleName(out possibleName);
		// 	string name = possibleName;
		// 	return name;
		// }



	#else

		private static void ReadBuffer(IntPtr cvPixelBufferPtr){
		}

		private static void ReadQRCode(long mtlTexPtr) {
		}

		private static float[] GetQRCodeCorners() {
			return new float[8];
		}

		private static string GetPossibleName(){
	    return "";
	  }


	  //
		// private static char[] GetPossibleName(){
		// 	return new char[0];
		// }

		// private static string GetPossibleName(){
		// 	return new string; //Error
		// }


	#endif

		[SerializeField]
		private Material material;
		private Matrix4x4 displayTransformInverse;
		private Vector3[] corners = new Vector3[8];


		void Start () {
			UnityARSessionNativeInterface.ARFrameUpdatedEvent += ARFrameUpdated;
			IsDetecting = false;
		}

		private void ARFrameUpdated(UnityARCamera camera) {
			// if(IsDetecting == true){
			// 	ReadBuffer(camera.videoParams.cvPixelBufferPtr);
			// }
			ReadBuffer(camera.videoParams.cvPixelBufferPtr);
		}

		void Update () {
			ARTextureHandles handles = UnityARSessionNativeInterface.GetARSessionNativeInterface ().GetARVideoTextureHandles ();
			UnityARCamera scamera = new UnityARCamera ();
		}

		void OnGetPossibleName(string arg) {
			possible = GetPossibleName();
		}

	}

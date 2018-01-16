using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class CamTex : MonoBehaviour {
		private Texture2D TexY2D;
		private Texture2D resultImg;
		private Renderer rend;

		void Start(){
			rend = GetComponent<Renderer>();
			TexY2D = new Texture2D (512, 512, TextureFormat.RGBA32, false);
			//resultImg = new Texture2D (512, 512, TextureFormat.RGBA32, false);
		}

		void Update(){

		}

		void OnPreRender(){
				TexY2D = UnityARVideo._videoTextureY;
				//Mat imgMat = new Mat (512, 512, CvType.CV_8UC4);
				//Utils.texture2DToMat (TexY2D, imgMat);
				//Mat gray = new Mat();
				//Imgproc.cvtColor(imgMat, gray, Imgproc.COLOR_RGBA2GRAY);
				//Utils.matToTexture2D (gray, resultImg);
			  rend.material.mainTexture = TexY2D;
				//Debug.Log(rend.material.GetTexture ("_MainTex"));
		}
}

using System;
using System.Collections;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

namespace UnityEngine.XR.iOS
{
public class previzCtrl : MonoBehaviour {

	//public GameObject highlight;


	public GameObject plane;
	public Camera camera;
	public ParticleSystem readingParticle;
	public Text myText;
	public string[] itemText = new string[]{"PiyoPiyo"};
	public GameObject textRoot;
	private GameObject textObject;
	private static string text;

	private Animator previzAnim;
	private bool plateIsOn = false;
	private bool animationIsPlaying = false;

	void Start () {
		previzAnim = plane.GetComponent<Animator>();

		// //--------Loading Text------- for Build
		// text = QRCodeReader.possible;
		// string[] textArray = text.Split(","[0]);
		// textObject = FlyingText.GetObject(itemText[0]);

		//-----Loading Text -----  for UnityEditor
		// textObject = FlyingText.GetObject(itemText[0]);
		//
		// textObject.transform.parent = textRoot.transform;
		// textObject.transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
		// textObject.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
		// textObject.transform.localRotation = new Quaternion(0.0f, 0.0f, 0.0f, 0.0f);
		// var rigidbodies = textObject.GetComponentsInChildren<Rigidbody>();
		// foreach (var rb in rigidbodies) {
		// 	rb.useGravity = false;
		// }
	}

	bool HitTestWithResultType (ARPoint point, ARHitTestResultType resultTypes)
	{
			List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, resultTypes);
			if (hitResults.Count > 0) {
					foreach (var hitResult in hitResults) {
								plane.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
								if(animationIsPlaying == false){
									text = QRCodeReader.possible;
									string[] textArray = text.Split(","[0]);
									myText.text = textArray[0];
									//FlyingText.UpdateObject(textObject,textArray[0]);
									previzAnim.SetTrigger("Play");
									readingParticle.Play();
									animationIsPlaying = true;
									Debug.Log("Play");
								}else if(animationIsPlaying == true){
									previzAnim.SetTrigger("Back");
									readingParticle.Stop();
									readingParticle.Clear();
									animationIsPlaying = false;
									Debug.Log("Stop");
								}
							return true;
					}
			}
			return false;
	}


	void Update(){
		//
		// if(Input.GetKeyDown("space"))
		// {
		// 	FlyingText.UpdateObject(textObject,"HogeHoge");
		// 	Debug.Log("Text");
		// }

		if(Input.touchCount > 0)
		{
			var touch = Input.GetTouch(0);
			if(touch.phase == TouchPhase.Began){
				var screenPosition = Camera.main.ScreenToViewportPoint(touch.position);
				ARPoint point = new ARPoint{ x = screenPosition.x, y = screenPosition.y};
				ARHitTestResultType[] resultTypes = {
					ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent,
							// if you want to use infinite planes use this:
							//ARHitTestResultType.ARHitTestResultTypeExistingPlane,
					ARHitTestResultType.ARHitTestResultTypeHorizontalPlane,
					ARHitTestResultType.ARHitTestResultTypeFeaturePoint
				};
				foreach (ARHitTestResultType resultType in resultTypes)
				{
					if (HitTestWithResultType (point, resultType))
					{
							return;
					}
				}
			}
		}
	}


}
}

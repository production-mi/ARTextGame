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

	private Animator previzAnim;
	private bool plateIsOn = false;
	private bool animationIsPlaying = false;

	void Start () {
		previzAnim = plane.GetComponent<Animator>();
	}

	bool HitTestWithResultType (ARPoint point, ARHitTestResultType resultTypes)
	{
			List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, resultTypes);
			if (hitResults.Count > 0) {
					foreach (var hitResult in hitResults) {
								plane.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
								if(animationIsPlaying == false){
									previzAnim.SetTrigger("Play");
									animationIsPlaying = true;
								}else{
									previzAnim.SetTrigger("Back");
									animationIsPlaying = false;
								}
							return true;
					}
			}
			return false;
	}


	void Update(){

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

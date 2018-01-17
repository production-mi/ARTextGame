using UnityEngine;
using System.Collections.Generic;

namespace UnityEngine.XR.iOS
{
public class TextCtrl : MonoBehaviour {

	public GameObject highlight;
	public float rotateSpeed = 150.0f;
	public static string[] itemText = new string[]{"Options"};
	public Vector3[] itemPositions = new Vector3[]{new Vector3(0, 0, 0)};
	public static bool clicked = false;
	private static string text;

	private GameObject textObject;
	private GameObject textRoot;

	void Start () {
		textRoot = new GameObject();
		textRoot.name = "textRoot";
		for (int i = 0; i < itemText.Length; i++) {
			// Create 3D text object
			textObject = FlyingText.GetObject (itemText[i]);
			//textObject.transform.position = itemPositions[i];

			// //Create collider (we don't use a collider for the 3D text object because we don't want the collider to rotate)
			// var cube = GameObject.CreatePrimitive (PrimitiveType.Cube);
			// cube.transform.localScale = new Vector3(7, 1.8f, .1f);
			// cube.transform.position = itemPositions[i];
			// cube.GetComponent<Renderer>().enabled = false;
      //
			// //Add the menu object script to the collider and assign values to the variables
			// var menuScript = cube.AddComponent<MenuObject>();
			// menuScript.highlight = highlight;
			// menuScript.rotateSpeed = rotateSpeed;
			// menuScript.menuObject = menuObject.transform;
		}
		textObject.transform.parent = textRoot.transform;
		//textObject.transform.position = itemPositions[0];
	}

	bool HitTestWithResultType (ARPoint point, ARHitTestResultType resultTypes)
	{
			List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, resultTypes);
			if (hitResults.Count > 0) {
					foreach (var hitResult in hitResults) {
							textRoot.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
							textRoot.transform.rotation = UnityARMatrixOps.GetRotation (hitResult.worldTransform);
							return true;
					}
			}
			return false;
	}

	void Update(){
		text = QRCodeReader.possible;
		//text = "Options,GetText,hoge,hoo";
		string[] textArray = text.Split(","[0]);
		FlyingText.UpdateObject(textObject, textArray[0]);

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

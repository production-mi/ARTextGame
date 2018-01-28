using System;
using System.Collections;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

namespace UnityEngine.XR.iOS
{
public class TextCtrl : MonoBehaviour {

	//public GameObject highlight;
	public GameObject Plate;
	public Camera camera;
	public Button reset;
	public Button reload;
	public GameObject debugPlane;
	public PhysicMaterial PhysicMaterial;
	private GameObject TextBounce;
	private GameObject joint1;
	private GameObject joint2;

	public float rotateSpeed = 150.0f;
	public static string[] itemText = new string[]{"Options"};
	public Vector3[] itemPositions = new Vector3[]{new Vector3(0, 0, 0)};
	public static bool clicked = false;
	private static string text;

	private bool plateIsOn = false;
	private GameObject plane;

	private GameObject textObject;
	private GameObject textRoot;
	private GameObject test;

	private float t;


	public bool BrainIsHit = false;

	void Start () {

		reset = reset.GetComponent<Button>();
		reset.onClick.AddListener(TextReset);

		reload = reload.GetComponent<Button>();
		reload.onClick.AddListener(TextReload);

		for (int i = 0; i < itemText.Length; i++) {
			plane = Instantiate(Plate);
			TextBounce = GameObject.Find("joint6");
			//plane.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
			textRoot = new GameObject();
			textRoot.name = "textRoot";
			textObject = FlyingText.GetObject (itemText[0]);
			textObject.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
			textObject.transform.parent = textRoot.transform;
			textRoot.transform.parent = TextBounce.transform;
			textRoot.transform.localScale = new Vector3(1f,1f,1f);
			textRoot.transform.localPosition = new Vector2(0f, 0f);

			/////^^^^^^^^

			// //test.transform.parent = TextBounce.transform;

			//textObject.transform.position = new Vector3(0.0f, 0.0f, 0.0f);
			//textRoot.transform.parent = joint.transform;
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

		// GameObject plane;
		// plane = Instantiate(Plate);
		// //Plate.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
		// //textRoot.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
		// textRoot.transform.parent = plane.transform;
		// textRoot.transform.position = new Vector3(textRoot.transform.position.x, textRoot.transform.position.y, textRoot.transform.position.z + 0.01f);
		//textObject.transform.position = itemPositions[0];
	}

	bool HitTestWithResultType (ARPoint point, ARHitTestResultType resultTypes)
	{
			List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, resultTypes);
			if (hitResults.Count > 0) {
					foreach (var hitResult in hitResults) {
							if(plateIsOn != true){
								plane = Instantiate(Plate);
								plane.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
								TextBounce = GameObject.Find("joint6");
								textRoot = new GameObject();
								textRoot.name = "textRoot";
								textObject = FlyingText.GetObject (itemText[0]);
								textObject.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
								textObject.transform.parent = textRoot.transform;
								textRoot.transform.parent = TextBounce.transform;
								textRoot.transform.localScale = new Vector3(1f,1f,1f);
								textRoot.transform.localPosition = new Vector2(0f, 0f);
								FlyingText.addRigidbodies = true;
								//textObject.transform.parent = joint.transform;
								//textRoot.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
								//textRoot.transform.parent = plane.transform;
								//textRoot.transform.position = new Vector3(textRoot.transform.position.x, textRoot.transform.position.y + 0.03f, textRoot.transform.position.z - 0.05f);
								//textRoot.transform.rotation = UnityARMatrixOps.GetRotation (hitResult.worldTransform);
								//textRoot.transform.LookAt(Camera.main.transform);
								//textRoot.transform.rotation = Quaternion.Euler (0.0f, textRoot.transform.rotation.eulerAngles.y, textRoot.transform.rotation.z);
								plateIsOn = true;
								debugPlane.SetActive(false);
							}
							//plane.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
							//
							return true;
					}
			}
			return false;
	}


	void TextReload(){
		text = QRCodeReader.possible;
		string[] textArray = text.Split(","[0]);
		//textObject = FlyingText.GetObject (itemText[0]);
		FlyingText.UpdateObject(textObject, textArray[0]);
		//FlyingText.physicsMaterial = PhysicMaterial;
	}


	void TextReset(){
			Destroy(plane);
			Destroy(textRoot);
			Destroy(textObject);
			Debug.Log("Clicked");
			plateIsOn = false;
			debugPlane.SetActive(true);
	}



	void Update(){
		// if(t < 1.0f || isOn != false){
		// 	float prevT = t;
		// 	t = t + Time.deltaTime *2;
		// 	float dt = t - prevT;
		// 	textRoot.transform.RotateAround(textRoot.transform.position, Vector3.right, 360 * dt);
		// 	if(textRoot.transform.rotation.x > -360){
		// 		isOn = false;
		// 	}
		// }
		//Debug.Log(joint);

		if(BrainIsHit = true){
			text = QRCodeReader.possible;
			string[] textArray = text.Split(","[0]);
			FlyingText.UpdateObject(textObject, textArray[0]);
		}


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

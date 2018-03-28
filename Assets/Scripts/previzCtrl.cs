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


	public GameObject debugBox;
	public Text guideText;
	private MeshRenderer debugBoxRenderer;


	public GameObject plane;
	public Camera camera;
	public ParticleSystem readingParticle;
	public Text myText;
	public string[] itemText = new string[]{"PiyoPiyo", "HogeHoge", "PukaPuka"};
	public GameObject textRoot;
	public GameObject brain;
	public Button reload;
	public Button liked;
	public Button disliked;
	public Button reset;

	//public Material text;


	private GameObject textObject;
	private string text;



	private Animator previzAnim;
	private Animator brainAnim;

	private bool playgroundIsDetected = false;
	private bool animationIsPlaying = false;
	private bool textIsUpdated = false;
	private bool textIsOn = false;
	private bool piyopiyo = false;
	private bool CoroutineTextCreate_IsRunning = false;

	public static bool plateIsOn = false;
	public static bool planeIsOn = false;
	public static bool readytoReloadText = false;


	void Start () {
		reload = reload.GetComponent<Button>();
		reload.onClick.AddListener(textIsReload);
		reload.gameObject.SetActive(false);

		liked = liked.GetComponent<Button>();
		liked.onClick.AddListener(answerIsliked);
		liked.gameObject.SetActive(false);


		disliked = disliked.GetComponent<Button>();
		disliked.onClick.AddListener(answerIsDisliked);
		disliked.gameObject.SetActive(false);

		reset = reset.GetComponent<Button>();
		reset.onClick.AddListener(playGroundIsReset);
		reset.gameObject.SetActive(false);

		previzAnim = plane.GetComponent<Animator>();
		brainAnim = brain.GetComponent<Animator>();

		debugBoxRenderer = debugBox.GetComponent<MeshRenderer>();

		//StartCoroutine(textCreate(textObject,text));

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

		SetObjectInvisible(plane, plateIsOn);
	}

	bool HitTestWithResultType (ARPoint point, ARHitTestResultType resultTypes, bool playground)
	{
			List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, resultTypes);
			if (hitResults.Count > 0 && playground == true) {
					foreach (var hitResult in hitResults) {
							debugBox.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
							if(Input.touchCount > 0){
								plane.transform.position = UnityARMatrixOps.GetPosition(hitResult.worldTransform);
								//Vector3 targetPosition = new Vector3(Camera.main.transform.position.x, plane.transform.position.y, Camera.main.transform.position.z);
								//plane.transform.LookAt(targetPosition);
								StartCoroutine(brainAnimation(textObject, text, animationIsPlaying));
								plateIsOn = true;
								readytoReloadText = true;
								reload.gameObject.SetActive(true);
								reset.gameObject.SetActive(true);
								SetObjectInvisible(debugBox, plateIsOn);
								SetObjectInvisible(plane, plateIsOn);
								debugBoxRenderer.enabled = false;
							}
								// StartCoroutine(playBrainAnimation(textObject, text, animationIsPlaying));
								// StartCoroutine(stopBrainAnimation(animationIsPlaying));
								// if(animationIsPlaying == false){
								// 	previzAnim.SetTrigger("Play");
								// 	readingParticle.Play();
								// 	animationIsPlaying = true;
								// }else if(animationIsPlaying == true){
								// 	previzAnim.SetTrigger("Back");
								// 	readingParticle.Stop();
								// 	readingParticle.Clear();
								// 	animationIsPlaying = false;
								// }
							return true;
					}
			}
			return false;
	}

//Button functions

	void textIsReload(){
		StartCoroutine(test());
		reload.gameObject.SetActive(false);
		liked.gameObject.SetActive(true);
		disliked.gameObject.SetActive(true);
		Debug.Log(piyopiyo);
	}


	void answerIsliked(){
		brainAnim.SetTrigger("Liked");
		Destroy(textObject);
		reload.gameObject.SetActive(true);
		liked.gameObject.SetActive(false);
		disliked.gameObject.SetActive(false);
		Debug.Log("liked");
		piyopiyo = false;
	}

	void answerIsDisliked(){
		brainAnim.SetTrigger("Disliked");
		Destroy(textObject);
		reload.gameObject.SetActive(true);
		liked.gameObject.SetActive(false);
		disliked.gameObject.SetActive(false);
		Debug.Log("disliked");
		piyopiyo = false;
	}


	void playGroundIsReset()
	{
		previzAnim.SetTrigger("Back");
		Destroy(textObject);
		readingParticle.Stop();
		readingParticle.Clear();

		plateIsOn = false;
		playgroundIsDetected = false;
		//readytoReloadText = false;
		animationIsPlaying = false;
		reload.gameObject.SetActive(false);
		liked.gameObject.SetActive(false);
		disliked.gameObject.SetActive(false);
		reset.gameObject.SetActive(false);

		SetObjectInvisible(plane, plateIsOn);
		Debug.Log("Stop");
	}



  //Switching object's visibility
	void SetObjectInvisible(GameObject TargetObjects, bool visibility)
	{
		if(visibility != true){
			Component[] Components = TargetObjects.GetComponentsInChildren(typeof(Renderer));
			foreach(Component c in Components )
			{
				Renderer renderer = (Renderer)c;
				renderer.enabled = false;
			}
	  }else{
			Component[] Components = TargetObjects.GetComponentsInChildren(typeof(Renderer));
			foreach(Component c in Components )
			{
				Renderer renderer = (Renderer)c;
				renderer.enabled = true;
			}
		}
	}



	IEnumerator textCreate(GameObject textObject, string text, bool textIsCreated, int random){
		if(textIsCreated != true)
		{
			text = itemText[random];
			//text = QRCodeReader.possible;
			string[] textArray = text.Split(","[0]);
			textObject  = FlyingText.GetObject(textArray[0]);
			textObject.transform.parent = textRoot.transform;
			textObject.transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
			textObject.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
			textObject.transform.localRotation = new Quaternion(0.0f, 0.0f, 0.0f, 0.0f);
			yield return CoroutineTextCreate_IsRunning = false;
		}else{
			// text = itemText[0];
			//text = QRCodeReader.possible;
			Destroy(textObject);
			Debug.Log("TextOFF");
			// string[] textArray = text.Split(","[0]);
			// textObject  = FlyingText.GetObject(textArray[0]);
			// textObject.transform.parent = textRoot.transform;
			// textObject.transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
			// textObject.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
			// textObject.transform.localRotation = new Quaternion(0.0f, 0.0f, 0.0f, 0.0f);
			yield return CoroutineTextCreate_IsRunning = false;;
		}

	}

	IEnumerator textDestroy(GameObject textObject, float delay)
	{
		Destroy(textObject);
		yield return piyopiyo = false;
	}



	// IEnumerator Fadeout(float aValue, float aTime)
	// {
	// 	float alphaTextMain  = textMain.color.a;
	// 	float alphaTextEdge  = textEdge.color.a;
	// 	for(float t = 0.0f; t < 1.0f; t += Time.deltaTime / aTime){
	// 		Color newColorMain = new Color(textMain.color.r,textMain.color.g,textMain.color.b, Mathf.Lerp(alphaTextMain,aValue,t));
	// 		Color newColorEdge = new Color(textEdge.color.r,textEdge.color.g,textEdge.color.b, Mathf.Lerp(alphaTextEdge,aValue,t));
	// 		textMain.color = newColorMain;
	// 		textEdge.color = newColorEdge;
	// 		yield return null;
	// 	}
	// 	// Destroy(textRoot);
	// 	Destroy(textObject);
	// 	TextBounceAnim.SetTrigger("TextOn");
	// 	yield return null;
  // }

	IEnumerator test()
	{
		if(piyopiyo == false){
			text = QRCodeReader.possible;
			string[] textArray = text.Split(","[0]);
			textObject  = FlyingText.GetObject(textArray[0]);
			textObject.transform.parent = textRoot.transform;
			textObject.transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
			textObject.transform.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
			textObject.transform.localRotation = new Quaternion(0.0f, 0.0f, 0.0f, 0.0f);
			Debug.Log("TextOn");
			yield return piyopiyo = true;
		}else
		{
			Destroy(textObject);
			Debug.Log("TextOFF");
			yield return piyopiyo = false;
		}
	}



	//
	// IEnumerator textDestroy(GameObject textObject){
	// 	Destroy(textObject);
	// 	yield return null;
	// }

	// IEnumerator textUpdate(GameObject textObject, string text){
	// 		text = QRCodeReader.possible;
	// 		string[] textArray = text.Split(","[0]);
	// 		FlyingText.UpdateObject(textObject, textArray[0]);
	// 		textIsUpdated = true;
	// 		yield return null;
	// }


	// IEnumerator stopBrainAnimation(bool animationIsPlaying){
	// 	if(animationIsPlaying == true){
	// 		previzAnim.SetTrigger("Back");
	// 		readingParticle.Stop();
	// 		readingParticle.Clear();
	// 		yield return animationIsPlaying = false;
	// 	}else{
	// 		yield return null;
	// 	}
	// }

	IEnumerator brainAnimation(GameObject textObject, string text, bool animationIsPlaying){
		if(animationIsPlaying == false){
			//StartCoroutine(textCreate(textObject,text));
			previzAnim.SetTrigger("Play");
			readingParticle.Play();
			animationIsPlaying = true;
			Debug.Log("Play");
			yield return animationIsPlaying = true;
		}else if(animationIsPlaying == true){
			previzAnim.SetTrigger("Back");
			readingParticle.Stop();
			readingParticle.Clear();
			Debug.Log("Stop");
			yield return animationIsPlaying = false;
		}
	}





	void Update()
	{

	  if(plateIsOn != true)
		{
			//Look at the camera direction
			Vector3 targetPosition = new Vector3(Camera.main.transform.position.x, debugBox.transform.position.y, Camera.main.transform.position.z);
			debugBox.transform.LookAt(targetPosition);
			//plane.transform.LookAt(targetPosition);

			//Create a ray to detect the floor plate. (For Guide tutorial)
			var ray = new Ray(Camera.main.transform.position, Camera.main.transform.forward);
			RaycastHit hit;
			if(Physics.Raycast (ray, out hit, 500) && hit.transform.gameObject.tag == "ARPlate"){
				debugBoxRenderer.enabled = true;
				playgroundIsDetected = true;
				guideText.enabled = false;
			}else{
				debugBoxRenderer.enabled = false;
				playgroundIsDetected = false;
				guideText.enabled = true;
			}
			var screenPosition = Camera.main.ScreenToViewportPoint( new Vector3(Screen.width/2, Screen.height/2, Camera.main.nearClipPlane));
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
				if (HitTestWithResultType (point, resultType, playgroundIsDetected))
				{
						return;
				}
				// var touch = Input.GetTouch(0);
				// if(touch.phase == TouchPhase.Began){
				// 	var screenPosition = Camera.main.ScreenToViewportPoint(touch.position);
				// 	ARPoint point = new ARPoint{ x = screenPosition.x, y = screenPosition.y};
				// 	ARHitTestResultType[] resultTypes = {
				// 		ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent,
				// 				// if you want to use infinite planes use this:
				// 				//ARHitTestResultType.ARHitTestResultTypeExistingPlane,
				// 		ARHitTestResultType.ARHitTestResultTypeHorizontalPlane,
				// 		ARHitTestResultType.ARHitTestResultTypeFeaturePoint
				// 	};
				// 	foreach (ARHitTestResultType resultType in resultTypes)
				// 	{
				// 		if (HitTestWithResultType (point, resultType))
				// 		{
				// 				return;
				// 		}
				// 	}
			}
		}else
		{
			// liked.gameObject.SetActive(true);
			// disliked.gameObject.SetActive(true);

		}


	}


}
}

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
	public Button like;
	public Button dislike;
	public Button Textreload;
	public Material textMain;
	public Material textEdge;

	private ParticleSystem fireworkInitial_L;
	private ParticleSystem fireworkBurst_L;
	private ParticleSystem fireworkInitial_S;
	private ParticleSystem fireworkBurst_S;




	public GameObject debugPlane;
	public PhysicMaterial PhysicMaterial;


	private GameObject MrNo;
	private MeshCollider MrNoCollider;
	private Animator MrNoAnim;
	private Animator TextBounceAnim;
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
	private Color originalColorTextMain;
	private Color originalColorTextEdge;
	private bool IsBroken = false;
	private Rigidbody rigidbodies;

	private float t;


	public bool BrainIsHit = false;

	void Start () {

		reset = reset.GetComponent<Button>();
		reset.onClick.AddListener(TextReset);

		// reload = reload.GetComponent<Button>();
		// reload.onClick.AddListener(TextReload);

		like = like.GetComponent<Button>();
		like.onClick.AddListener(IsLiked);

		dislike = dislike.GetComponent<Button>();
		dislike.onClick.AddListener(IsDisLiked);

		Textreload = Textreload.GetComponent<Button>();
		Textreload.onClick.AddListener(IsReload);


		originalColorTextMain = new Color(0.2f, 0.525f, 0.960f, 1.0f);
		originalColorTextEdge = new Color(1.0f, 1.0f, 1.0f, 1.0f);
		textMain.color = originalColorTextMain;
		textEdge.color = originalColorTextEdge;


			plane = Instantiate(Plate);
			//plane.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
			textRoot = new GameObject();
			textRoot.name = "textRoot";
			TextBounce = GameObject.Find("joint6");
			fireworkInitial_L = GameObject.Find("FireworkInitial_L").GetComponent<ParticleSystem>();
			fireworkInitial_S = GameObject.Find("FireworkInitial_S").GetComponent<ParticleSystem>();
			fireworkBurst_L = GameObject.Find("FireworkBurst_L").GetComponent<ParticleSystem>();
			fireworkBurst_S = GameObject.Find("FireworkBurst_S").GetComponent<ParticleSystem>();
			TextBounceAnim = GameObject.Find("Ball2").GetComponent<Animator>();

			MrNo = GameObject.Find("MrNo_Anim");
			MrNoAnim = MrNo.GetComponent<Animator>();
			MrNoCollider = MrNo.GetComponent<MeshCollider>();
			//TextBounce = GameObject.Find("TextAnimSocket");
			Debug.Log(TextBounce);
			textObject = FlyingText.GetObjects(itemText[0]);
			textObject.transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
			textObject.transform.parent = textRoot.transform;
			textRoot.transform.parent = TextBounce.transform;
			textRoot.transform.localScale = new Vector3(1f,1f,1f);
			textRoot.transform.localPosition = new Vector2(0f, 0f);
			var rigidbodies = textObject.GetComponentsInChildren<Rigidbody>();
			foreach (var rb in rigidbodies) {
				rb.useGravity = false;
			}

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
							plane.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
							// Vector3 TargetCamPosition = Camera.main.transform.position;
							// TargetCamPosition.y = plane.transform.position.y;
							// TargetCamPosition.z = plane.transform.position.z * -1f;
							// plane.transform.LookAt (TargetCamPosition);
							if(plateIsOn != true){
								// plane = Instantiate(Plate);
								// //plane.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
								// textRoot = new GameObject();
								// textRoot.name = "textRoot";
								// TextBounce = GameObject.Find("joint6");
								// fireworkInitial_L = GameObject.Find("FireworkInitial_L").GetComponent<ParticleSystem>();
								// fireworkInitial_S = GameObject.Find("FireworkInitial_S").GetComponent<ParticleSystem>();
								// fireworkBurst_L = GameObject.Find("FireworkBurst_L").GetComponent<ParticleSystem>();
								// fireworkBurst_S = GameObject.Find("FireworkBurst_S").GetComponent<ParticleSystem>();
								// TextBounceAnim = GameObject.Find("Ball2").GetComponent<Animator>();
                //
								// MrNo = GameObject.Find("MrNo_Anim");
								// MrNoAnim = MrNo.GetComponent<Animator>();
								// // MrNoCollider = MrNo.GetComponent<MeshCollider>();
								// //TextBounce = GameObject.Find("TextAnimSocket");
								// // Debug.Log(TextBounce);
								// textObject = FlyingText.GetObjects(itemText[0]);
								// textObject.transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
								// textObject.transform.parent = textRoot.transform;
								// textRoot.transform.parent = TextBounce.transform;
								// textRoot.transform.localScale = new Vector3(1f,1f,1f);
								// textRoot.transform.localPosition = new Vector2(0f, 0f);
								// var rigidbodies = textObject.GetComponentsInChildren<Rigidbody>();
								// foreach (var rb in rigidbodies) {
								// 	rb.useGravity = false;
								// }


								//textObject.transform.parent = joint.transform;
								//textRoot.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
								//textRoot.transform.parent = plane.transform;
								//textRoot.transform.position = new Vector3(textRoot.transform.position.x, textRoot.transform.position.y + 0.03f, textRoot.transform.position.z - 0.05f);
								//textRoot.transform.rotation = UnityARMatrixOps.GetRotation (hitResult.worldTransform);
								//textRoot.transform.LookAt(Camera.main.transform);
								//textRoot.transform.rotation = Quaternion.Euler (0.0f, textRoot.transform.rotation.eulerAngles.y, textRoot.transform.rotation.z);
								plateIsOn = true;
							}
							//plane.transform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
							//
							plateIsOn = true;
							return true;
					}
			}
			return false;
	}

	void TextReset(){
			Destroy(plane);
			Destroy(textRoot);
			Destroy(textObject);
			Debug.Log("Clicked");
			plateIsOn = false;
			debugPlane.SetActive(true);
	}


	void IsLiked(){
		fireworkInitial_L.Play();
		fireworkBurst_L.Play();
		fireworkInitial_S.Play();
		fireworkBurst_S.Play();
		MrNoAnim.SetTrigger("Liked");
		StartCoroutine(Fadeout(0.0f, 1.0f));
		IsBroken = true;
	}


	void IsDisLiked(){
		var rigidbodies = textObject.GetComponentsInChildren<Rigidbody>();
		foreach (var rb in rigidbodies) {
			rb.useGravity = true;
			rb.AddExplosionForce (220.0f, new Vector3(0, 1, 6.5f), 10.0f, 9.0f);
		}
		MrNoAnim.SetTrigger("Disliked");
		StartCoroutine(Fadeout(0.0f, 1.0f));
		IsBroken = true;
	}


	void IsReload(){
		MrNoAnim.SetTrigger("Suggest");
		StartCoroutine(Hogehoge());
		IsBroken = false;
	}

	IEnumerator Hogehoge(){
		if(IsBroken != false){
			textMain.color = originalColorTextMain;
			textEdge.color = originalColorTextEdge;
			textObject = FlyingText.GetObjects(itemText[0]);
			textObject.transform.parent = textRoot.transform;
			textObject.transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
			textObject.transform.localPosition = new Vector2(0f, 0f);
			textRoot.transform.parent = TextBounce.transform;
			textRoot.transform.localScale = new Vector3(1f,1f,1f);
			textRoot.transform.localPosition = new Vector2(0f, 0f);
			var rigidbodies = textObject.GetComponentsInChildren<Rigidbody>();
			foreach (var rb in rigidbodies) {
				rb.useGravity = false;
			}
			TextBounceAnim.SetTrigger("TextOn");
		}else{
			StartCoroutine(Fadeout(0.0f, 1.0f));
			TextBounceAnim.SetTrigger("TextOn");
		}
		yield return null;
	}



		IEnumerator Fadeout(float aValue, float aTime){
		float alphaTextMain  = textMain.color.a;
		float alphaTextEdge  = textEdge.color.a;
		for(float t = 0.0f; t < 1.0f; t += Time.deltaTime / aTime){
			Color newColorMain = new Color(textMain.color.r,textMain.color.g,textMain.color.b, Mathf.Lerp(alphaTextMain,aValue,t));
			Color newColorEdge = new Color(textEdge.color.r,textEdge.color.g,textEdge.color.b, Mathf.Lerp(alphaTextEdge,aValue,t));
			textMain.color = newColorMain;
			textEdge.color = newColorEdge;
			yield return null;
		}
		// Destroy(textRoot);
		Destroy(textObject);
		TextBounceAnim.SetTrigger("TextOn");
		yield return null;
	}


	void Update(){
		//Debug.Log(IsBroken);
		// if(t < 1.0f || isOn != false){
		// 	float prevT = t;
		// 	t = t + Time.deltaTime *2;
		// 	float dt = t - prevT;
		// 	textRoot.transform.RotateAround(textRoot.transform.position, Vector3.right, 360 * dt);
		// 	if(textRoot.transform.rotation.x > -360){
		// 		isOn = false;
		// 	}
		// }
		//Debug.Log(MrNoCollider);

		// if(BrainIsHit = true){
		// 	text = QRCodeReader.possible;
		// 	string[] textArray = text.Split(","[0]);
		// 	FlyingText.UpdateObject(textObject, textArray[0]);
		// }


		if(Input.touchCount > 0)
		{
			var touch = Input.GetTouch(0);
			if(touch.phase == TouchPhase.Began){
				var screenPosition = Camera.main.ScreenToViewportPoint(touch.position);
				// Ray ray = Camera.main.ScreenPointToRay(touch.position);
				// RaycastHit hit = new RaycastHit();
				// if (Physics.Raycast(ray, out hit)){
				// 	if (hit.collider.gameObject == MrNoCollider){
				// 	   Debug.Log("Hit MrNoTrue");
				// 	}
        //
				// }
				// 	if (hit.collider.gameObject == MrNo.gameObject){
				// 		return true;
				// 	}
				// }
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

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class ButtonText_Ctrl : MonoBehaviour {

	private Animator ButtonAnim;
	public GameObject joint;
	private GameObject textctrl;
	private TextCtrl TextCtrlCS;

	// Use this for initialization
	void Start () {
		textctrl = GameObject.Find("TextCtrl");
		TextCtrlCS = textctrl.GetComponent<TextCtrl>();
		ButtonAnim = GetComponent<Animator>();
	}

	// Update is called once per frame
	void Update () {
		if(OnTouchDown()){
		ButtonAnim.SetTrigger("TextOn");
		TextCtrlCS.BrainIsHit = true;
		Debug.Log("BrainHit");
		}
	}


	bool OnTouchDown() {
		if( 0 < Input.touchCount){
			for(int i = 0; i < Input.touchCount; i++){
				Touch t = Input.GetTouch(i);
				if(t.phase == TouchPhase.Began ){
					Ray ray = Camera.main.ScreenPointToRay(t.position);
					RaycastHit hit = new RaycastHit();
					if (Physics.Raycast(ray, out hit)){
						if (hit.collider.gameObject == this.gameObject){
							return true;
						}
					}
				}
			}
		}
		return false; //タッチされてなかったらfalse
		TextCtrlCS.BrainIsHit = false;
	}
}

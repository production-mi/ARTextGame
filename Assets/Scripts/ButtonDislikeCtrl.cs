using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonDislikeCtrl : MonoBehaviour {
	private Animator ButtonAnim;
	private GameObject TextAnim;


	// Use this for initialization
	void Start () {
		ButtonAnim = GetComponent<Animator>();
		TextAnim = GameObject.Find("TextAnim");

	}

	// Update is called once per frame
	void Update () {

	}

	void OnMouseDown(){
	}

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonCtrl : MonoBehaviour {

	private Animator ButtonAnim;
	public ParticleSystem PsystemInitial_L;
	public ParticleSystem PsystemInitial_S;
	public ParticleSystem PsystemBurst_L;
	public ParticleSystem PsystemBurst_S;



	// Use this for initialization
	void Start () {
		ButtonAnim = GetComponent<Animator>();

	}

	// Update is called once per frame
	void Update () {

	}

	void OnMouseDown(){
		ButtonAnim.SetTrigger("onDown");
		PsystemInitial_L.Play();
		PsystemBurst_L.Play();
		PsystemInitial_S.Play();
		PsystemBurst_S.Play();
  }
}

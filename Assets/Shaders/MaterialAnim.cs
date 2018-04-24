using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MaterialAnim : MonoBehaviour {

	public Material targetMat;
	private float opacityValue;

	// Use this for initialization
	void Start () {
		targetMat.SetFloat("_Opacity", 0.0f);
	}

	// Update is called once per frame
	void Update () {
		opacityValue += 1.0f;
		targetMat.SetFloat("_Opacity", opacityValue);

	}
}

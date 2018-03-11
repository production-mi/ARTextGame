using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenANim : MonoBehaviour {

	public Material Screen;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {
		float offset = Time.time * 0.5f;
		Screen.SetTextureOffset("_MainTex", new Vector2(0, offset));
	}
}

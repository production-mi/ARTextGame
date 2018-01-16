﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GetText : MonoBehaviour {

	TextMesh TextMesh;
	string text;
	string[] textArray;

	// Use this for initialization
	void Start () {
		TextMesh = GetComponent<TextMesh>();
	}

	// Update is called once per frame
	void Update () {
		text = QRCodeReader.possible;
		textArray = text.Split(",");
		Debug.Log(textArray);
		TextMesh.text = text;

	}
}

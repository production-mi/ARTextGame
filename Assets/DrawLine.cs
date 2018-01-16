using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DrawLine : MonoBehaviour {

	// Use this for initialization
	void Start () {
		GameObject plane = GameObject.CreatePrimitive(PrimitiveType.Plane);
		GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
		cube.transform.position = new Vector3(0, 0.5F, 0);

	}

	// Update is called once per frame
	void Update () {

	}
}

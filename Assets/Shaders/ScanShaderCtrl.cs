using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScanShaderCtrl : MonoBehaviour {

	public Button reload;

	public Material disolveMaterial;
	public float speed;
	public float max;
	public float scrollSpeed;
	public float currentY;

	private float startTime;


	// Use this for initialization
	void Start () {
		reload = reload.GetComponent<Button>();
		reload.onClick.AddListener(TriggerEffect);

	}

	// Update is called once per frame
	void Update () {

		if(currentY < max)
		{
			float offset = Time.time * scrollSpeed;
			disolveMaterial.SetFloat("_DisolveY", currentY);
			disolveMaterial.SetTextureOffset("_DisolveTexture", new Vector2(offset, 0));
			currentY += Time.deltaTime * speed;
		}

		if(Input.GetKeyDown(KeyCode.Space))
			TriggerEffect();
	}

	private void TriggerEffect()
	{
		startTime = Time.time;
		currentY = 1.7f;
		//currentY = 2.23f;
	}
}

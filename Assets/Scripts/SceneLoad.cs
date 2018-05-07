using System;
using System.Collections;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using TapticPlugin;

public class SceneLoad : MonoBehaviour {


	public Image BG_Manual;
	public Button ShowManual;
	public Button BackToGame;





	public void loadMenuScene()
	{
		Application.LoadLevel("Menu");
	}

	public void loadARScene()
	{
		Application.LoadLevel("ARTextGame_V2");
	}

	public void loadAboutScene()
	{
		Application.LoadLevel("About");
	}


	public void showManual()
	{
		ShowManual.gameObject.SetActive(false);
		BG_Manual.gameObject.SetActive(true);
		BackToGame.gameObject.SetActive(true);
	}

	public void hideManual()
	{
		ShowManual.gameObject.SetActive(true);
		BG_Manual.gameObject.SetActive(false);
		BackToGame.gameObject.SetActive(false);
	}


	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}
}

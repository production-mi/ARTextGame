using System;
using System.Collections;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

public class MenuCtrl : MonoBehaviour {


	public Image BG_Manual;
	public Button ShowManual;
	public Button BackToGame;
	public Button GotToARscene;

	public void loadARScene()
	{
		Application.LoadLevel("ARTextGame_V2");
	}


	public void showManual()
	{
		ShowManual.gameObject.SetActive(false);
		GotToARscene.gameObject.SetActive(false);
		BG_Manual.gameObject.SetActive(true);
		BackToGame.gameObject.SetActive(true);
	}

	public void hideManual()
	{
		ShowManual.gameObject.SetActive(true);
		GotToARscene.gameObject.SetActive(true);
		BG_Manual.gameObject.SetActive(false);
		BackToGame.gameObject.SetActive(false);
	}

}

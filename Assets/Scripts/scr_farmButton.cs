using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class scr_farmButton : MonoBehaviour
{
	public SpriteRenderer spr;
	public Sprite buttUp;
	public Sprite buttDown;
	public GameObject controller;
	scr_controller cont;
    // Start is called before the first frame update
    void Start()
    {
        cont = controller.GetComponent<scr_controller>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnMouseDown() {
    	spr.sprite = buttDown;
    }
    void OnTouchStart(){
    	spr.sprite = buttDown;
    }

    void OnMouseUp(){
    	spr.sprite = buttUp;
    	SceneManager.LoadScene(sceneName:"Farm", LoadSceneMode.Single);
    }
    void OnTouchEnd(){
    	spr.sprite = buttUp;
    	SceneManager.LoadScene(sceneName:"Farm", LoadSceneMode.Single);
    }
    void OnMouseExit() {
        spr.sprite = buttUp;
        SceneManager.LoadScene(sceneName:"Farm", LoadSceneMode.Single);
    }
}

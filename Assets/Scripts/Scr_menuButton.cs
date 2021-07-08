using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Scr_menuButton : MonoBehaviour
{
	public SpriteRenderer spr;
    public Sprite butt_up;
    public Sprite butt_down;
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
	    spr.sprite = butt_down;
    }
    void OnTouchStart() {
        spr.sprite = butt_down;
    }

    void OnMouseUp() {
        spr.sprite = butt_up;
        SceneManager.LoadScene(sceneName:"Menu");
        SceneManager.UnloadScene(sceneName:"Home");
    }
    void OnTouchEnd() {
        spr.sprite = butt_up;
        SceneManager.LoadScene(sceneName:"Menu");
        SceneManager.UnloadScene(sceneName:"Home");
    }

    void OnMouseExit() {
        spr.sprite = butt_up;
        SceneManager.LoadScene(sceneName:"Menu");
        SceneManager.UnloadScene(sceneName:"Home");
    }
}

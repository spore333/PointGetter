using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cas_10 : MonoBehaviour {
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

    private readonly System.Random ran = new System.Random();  

    // Update is called once per frame
    void Update()
    {
    	
    }
    void OnMouseDown() {
    	spr.sprite = butt_down;
    	cont.score-=2;
    	if (ran.Next(0, 10) == 0){
    		cont.score+=4;
    	}
	}
    void OnTouchStart() {
        spr.sprite = butt_down;
        cont.score-=2;
    	if (ran.Next(0, 10) == 0){
    		cont.score+=4;
    	}
    } 
}

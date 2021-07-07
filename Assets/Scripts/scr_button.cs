using System.Collections;
using System.Collections.Generic;
using UnityEngine; 


public class scr_button : MonoBehaviour {
    public SpriteRenderer spr;
    public Sprite butt_up;
    public Sprite butt_down;
    public Sprite critbutt_down;
    public Sprite critbutt_up;
    public GameObject controller;
    //public GameObject generator;
    //RandomGenerator gen;
    scr_controller cont;
    public bool special;
    public int ran_n;

    // Start is called before the first frame update
    void Start()
    {
        cont = controller.GetComponent<scr_controller>();
        //gen = generator.GetComponent<RandomGenerator>();
        special = false;
        ran_n = 1000;
    }

    private readonly System.Random ran = new System.Random();  
  
    // Generates a random number within a range.      
    public int RandomNumber(int min, int max)  
    {  
    	return ran.Next(min, max);  
    }  

    // Update is called once per frame
    void Update() 
    {
    	if (RandomNumber(0,ran_n) == 0) {
    		special = true;
    		spr.sprite = critbutt_up;
    	}

    	//for testing only
    	if (special){
    		spr.sprite = critbutt_up;
    	}

    }

    //when clicked
    void OnMouseDown() {
    	if (!special){
	        spr.sprite = butt_down;
	        cont.score++;
	    }
	    if (special){
	    	spr.sprite = critbutt_down;
	    	if (cont.score<50){
	    		cont.score+=5;
	    	}
	    	else {
	    		cont.score+=(int)(cont.score*.1);
	    	}
	    	special = false;
	    }

    }
    void OnMouseUp() {
        spr.sprite = butt_up;
    }
    void OnMouseExit() {
        spr.sprite = butt_up;
    }


}   

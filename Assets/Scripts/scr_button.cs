using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class scr_button : MonoBehaviour
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
        //cont.score += 1;
    }

    //when clicked
    void OnMouseDown()
    {
        spr.sprite = butt_down;
        cont.score++;

    }
    void OnMouseUp()
    {
        spr.sprite = butt_up;
    }
    void OnMouseExit()
    {
        spr.sprite = butt_up;
    }
}   

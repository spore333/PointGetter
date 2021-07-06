using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class scr_draw_score : MonoBehaviour
{
    public Transform t;
    public Text txt;
    public GameObject controller;
    scr_controller cont;
    public GameObject icon;
    Transform icon_t;
    float ico_origX;
    public Camera cam;

    // Start is called before the first frame update
    void Start()
    {
        cont = controller.GetComponent<scr_controller>();
        icon_t = icon.GetComponent<Transform>();
        ico_origX = icon_t.position.x;
    }

    // Update is called once per frame
    void Update()
    {
        //int spr_width = icon.g
        int points = cont.score;
        txt.text = points.ToString();

        float txt_w = txt.preferredWidth;
        //icon_t.position = new Vector3(ico_origX-(pixelToWorld(txt_w)/2)-0.75f, icon_t.position.y);
        //can you guys see this?
    }

    float pixelToWorld(float len)
    {
        float ret;
        ret = cam.ScreenToWorldPoint(new Vector3((Screen.width / 2) + len, 0, 0)).x;
        return ret;
    }
    float worldToPixel(float len)
    {
        float ret;
        ret = cam.WorldToScreenPoint(new Vector3((Screen.width / 2) + len, 0, 0)).x;
        return ret;
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class scr_controller : MonoBehaviour
{
    public int score;

    private void Awake()
    {
        DontDestroyOnLoad(transform.gameObject);
    }
        // Start is called before the first frame update
    void Start()
    {
        SceneManager.UnloadSceneAsync(sceneName:"Menu");
        SceneManager.UnloadSceneAsync(sceneName:"Farm");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;  
using System.Text;  

public class RandomGenerator : MonoBehaviour
{
	private void Awake()
    {
        DontDestroyOnLoad(transform.gameObject);
    }
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private readonly System.Random ran = new System.Random();  
  
    // Generates a random number within a range.      
    public int RandomNumber(int min, int max)  
    {  
    	return ran.Next(min, max);  
    }  


}

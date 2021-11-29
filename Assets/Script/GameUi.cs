using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class GameUi : MonoBehaviour
{
    public GameObject gameloseUi;
    public GameObject gameWinUi;
    bool gameIsOver;
    public GameObject restartbtn;
    void Start()
    {
        Gaurd.OnGaurdHasSpottedPlayer += ShowGameLoseUi;
        FindObjectOfType<Player>().onReachEndofLevel += ShowGamewinUi;
    }

    // Update is called once per frame
    void Update()
    {
        //if (gameIsOver)
        //{
        //    if (Input.GetKeyDown(KeyCode.Space))
        //    {
        //        SceneManager.LoadScene(0);
        //    }
        //}
    }


    void ShowGamewinUi()
    {
        onGameover(gameWinUi);
        restartbtn.SetActive(true);
    }

    void ShowGameLoseUi()
    {
        onGameover(gameloseUi);
        restartbtn.SetActive(true);
    }


    void onGameover(GameObject gameOverui)
    {
        gameOverui.SetActive(true);
        gameIsOver = true;
        Gaurd.OnGaurdHasSpottedPlayer -= ShowGameLoseUi;
        FindObjectOfType<Player>().onReachEndofLevel -= ShowGamewinUi;
    }


    public void restart()
    {
        if (gameIsOver)
        {

            SceneManager.LoadScene(0);

        }
    }






}

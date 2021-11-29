using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gaurd : MonoBehaviour
{
    public static event System.Action OnGaurdHasSpottedPlayer;

    public float speed = 5;
    public float waitTime = .3f;
    public float turnSpeed = 90;
    public float timeToSpotplayer = .5f;

    public Light spotlight;
    public float viewDistance;
    public LayerMask viewMask;

    float viewAngle;
    float playerVisibleTimer;
    
    public Transform pathholder;
    Transform player;
    Color orginalSpotColor;

    private void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player").transform;
        viewAngle = spotlight.spotAngle;
        orginalSpotColor = spotlight.color;

        Vector3[] waypoints = new Vector3[pathholder.childCount];
        for(int i = 0; i < waypoints.Length; i++)
        {
            waypoints[i] = pathholder.GetChild(i).position;
            waypoints[i] = new Vector3(waypoints[i].x, transform.position.y, waypoints[i].z);
        }

        StartCoroutine(Followpath(waypoints));
    }

    private void Update()
    {
        if (canSeePlayer())
        {
            playerVisibleTimer += Time.deltaTime;
        }
        else
        {
            playerVisibleTimer -= Time.deltaTime;
        }

        playerVisibleTimer = Mathf.Clamp(playerVisibleTimer, 0, timeToSpotplayer);
        spotlight.color = Color.Lerp(orginalSpotColor, Color.red, playerVisibleTimer / timeToSpotplayer);

        if(playerVisibleTimer >= timeToSpotplayer)
        {
            if(OnGaurdHasSpottedPlayer != null)
            {
                OnGaurdHasSpottedPlayer();
            }
        }
    }

    bool canSeePlayer()
    {
        if (Vector3.Distance(transform.position, player.position) < viewDistance)
        {
            Vector3 dirToplayer = (player.position - transform.position).normalized;
            float angleBetweenGaurdandPlayer = Vector3.Angle(transform.forward, dirToplayer);
            if(angleBetweenGaurdandPlayer < viewAngle / 2f)
            {
                if(!Physics.Linecast(transform.position,player.position, viewMask))
                {
                    return true;
                }
               
            }
        }

        return false;
    }
     

    IEnumerator Followpath(Vector3[] waypoints)
    {
        transform.position = waypoints[0];

        int targetwaypointindex = 1;
        Vector3 targetWaypoint = waypoints[targetwaypointindex];
        transform.LookAt(targetWaypoint);

        while (true)
        {
            transform.position = Vector3.MoveTowards(transform.position, targetWaypoint, speed * Time.deltaTime);
            if(transform.position == targetWaypoint)
            {
                targetwaypointindex = (targetwaypointindex + 1) % waypoints.Length;
                targetWaypoint = waypoints[targetwaypointindex];
                yield return new WaitForSeconds(waitTime);
                yield return StartCoroutine(TurnToface(targetWaypoint));
            }
            yield return null;
        }

    }
    IEnumerator TurnToface(Vector3 looktarget)
    {
        Vector3 dirToLooktarget = (looktarget - transform.position).normalized;
        float targetangle = 90 - Mathf.Atan2(dirToLooktarget.z, dirToLooktarget.x) * Mathf.Rad2Deg;

        while(Mathf.Abs( Mathf.DeltaAngle(transform.eulerAngles.y,targetangle)) > 0.05)
        {
            float angle = Mathf.MoveTowardsAngle(transform.eulerAngles.y, targetangle, turnSpeed * Time.deltaTime);
            transform.eulerAngles = Vector3.up * angle;
            yield return null;

        }
    }


    private void OnDrawGizmos()
    {

        Vector3 startposition = pathholder.GetChild(0).position;
        Vector3 previouspos = startposition;
        foreach(Transform waypoint in pathholder)
        {
            Gizmos.DrawSphere(waypoint.position, .3f);
            Gizmos.DrawLine(previouspos, waypoint.position);
            previouspos = waypoint.position;
        }
        Gizmos.DrawLine(previouspos, startposition);

        Gizmos.color = Color.red;
        Gizmos.DrawRay(transform.position, transform.forward * viewDistance);

    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{

    public event System.Action onReachEndofLevel;

    public static Player instance;

    public float moveSpeed = 7;
    public float smoothMoveTime = .1f;
    public float turnSpeed = 8;

    float angle;
    float smoothInputMagnitude;
    float smoothMoveVelocity;
    Vector3 velocity;

    new Rigidbody rigidbody;
	protected Joystick joyStick;
    public  bool disable;
    private void Awake()
    {
        instance = this;
    }

	void Start()
	{
		rigidbody = GetComponent<Rigidbody>();
		joyStick = FindObjectOfType<Joystick>();
		Gaurd.OnGaurdHasSpottedPlayer += Disable;
	}

	void Update()
	{
		
			Vector3 inputDirection = Vector3.zero;
			if (!disable) 
			{
				inputDirection = new Vector3(-joyStick.Vertical*10, 0, joyStick.Horizontal*10).normalized;
			}
			float inputMagnitude = inputDirection.magnitude;
			smoothInputMagnitude = Mathf.SmoothDamp(smoothInputMagnitude, inputMagnitude, ref smoothMoveVelocity, smoothMoveTime);

			float targetAngle = Mathf.Atan2(inputDirection.x, inputDirection.z) * Mathf.Rad2Deg;
			angle = Mathf.LerpAngle(angle, targetAngle, Time.deltaTime * turnSpeed * inputMagnitude);

			velocity = transform.forward * moveSpeed * smoothInputMagnitude;
		
	}

	void OnTriggerEnter(Collider hitCollider)
	{
		if (hitCollider.tag == "Finish")
		{
			Disable();
			if (onReachEndofLevel != null)
			{
				onReachEndofLevel();
			}
		}
	}

	void Disable()
	{
		disable = true;
	}

	void FixedUpdate()
	{
		rigidbody.MoveRotation(Quaternion.Euler(Vector3.up * angle));
		rigidbody.MovePosition(rigidbody.position + velocity * Time.deltaTime);
	}

	void OnDestroy()
	{
		Gaurd.OnGaurdHasSpottedPlayer -= Disable;
	}
}

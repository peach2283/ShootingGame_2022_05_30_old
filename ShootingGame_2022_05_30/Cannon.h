#pragma once
#include "Sprite.h"

class Cannon : public Sprite
{
private:
	float hp;

public:
	Cannon(float px, float py);
	~Cannon();

	void Start();
	void Update();

	void OnTriggerStay2D(Collider2D collision);
	void Explode();
};


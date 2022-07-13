#pragma once
#include "Sprite.h"

class Boss : public Sprite
{
private:
	float speed;

public:
	Boss(float px, float py);
	~Boss();

	void Start();
	void Update();
};


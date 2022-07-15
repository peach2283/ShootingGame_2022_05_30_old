#include "ShootingGame.h"

Cannon::Cannon(float px, float py) : Sprite("�����ڽ�", "", true, px, py, 2)
{
	this->hp = 100;
}

Cannon::~Cannon()
{}

void Cannon::Start()
{
	SetSprite("Asset/����.bmp", 357, 262, 21, 22);
	AddBoxCollider2D(0, 0, 21, 22);
}

void Cannon::Update()
{}

void Cannon::OnTriggerStay2D(Collider2D collision)
{
	string tag = collision.tag;

	if (tag == "������")
	{
		hp = hp - 10;

		if (hp <= 0)
		{
			Explode();
		}
	}
	else if (tag == "��ź����")
	{
		Explode();
	}
}

void Cannon::Explode()
{
	float px, py;
	GetPosition(px, py);

	Instantiate(new BossChildExp(px, py));
	Destroy(this);
}

void Cannon::OnDestroy()
{
	GameObject* parent = GetParent();
	((Boss*)parent)->OnChildDestroy("ĳ��");
}
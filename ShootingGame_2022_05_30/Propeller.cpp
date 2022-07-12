#include "ShootingGame.h"

Propeller::Propeller(float px, float py) : Animation("", "", true, px, py, 2)
{}

Propeller::~Propeller()
{}

void Propeller::Start()
{
	//�ִϸ��̼�..�̹����� �߰��ϱ� - ���ؾ��� �ִϸ��̼� (0��)
	AddSprite("Asset/�����緯1.bmp", 5,  5, 32, 12,    0,   16, 6);
	AddSprite("Asset/�����緯1.bmp", 39, 5, 32, 12,    0,   16, 6);
	AddSprite("Asset/�����緯1.bmp", 72, 5, 30, 12,    0,   15, 6);
	AddSprite("Asset/�����緯1.bmp", 104, 5, 24, 12,   0,   12, 6);

	AddSprite("Asset/�����緯1.bmp", 131, 5, 20, 12,   0,   10, 6);
	AddSprite("Asset/�����緯1.bmp", 153, 5, 26, 12,   0,   13, 6);
	AddSprite("Asset/�����緯1.bmp", 182, 5, 28, 12,   0,   14, 6);
	AddSprite("Asset/�����緯1.bmp", 213, 5, 30, 12,   0,   15, 6);

	//�ִϸ��̼�..�̹����� �߰��ϱ� - ���ع��� �ִϸ��̼� (1��)
	AddSprite("Asset/�����緯2.bmp", 7, 4, 32, 48,     1,   16, 6);
	AddSprite("Asset/�����緯2.bmp", 42, 4, 31, 48,    1,   15, 6);
	AddSprite("Asset/�����緯2.bmp", 76, 4, 29, 48,    1,   15, 6);
	AddSprite("Asset/�����緯2.bmp", 108, 4, 31, 48,   1,   18, 6);

	AddSprite("Asset/�����緯2.bmp", 142, 4, 31, 48,    1, 17, 6);
	AddSprite("Asset/�����緯2.bmp", 176, 4, 32, 48,    1, 16, 6);
	AddSprite("Asset/�����緯2.bmp", 210, 4, 31, 48,    1, 16, 6);
	AddSprite("Asset/�����緯2.bmp", 244, 4, 32, 48,    1, 16, 6);

	//�ִϸ��̼� �ӵ�
	SetSpeed(4);
}

void Propeller::Update()
{}
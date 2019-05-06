#pragma once
#include "Entity.h"
#include <vector>
#include "Bullets.h"
class Enemy 
	: public Entity
{
public:
	Enemy();
	~Enemy();
	int movementSpeed = 5;
	int movementLengh = 150;
	int counterWalking = 0;
	int direction = 0;
	int counter = 0;
	int n = 100;
	sf::Vector2u textureSize;
	int hp = 100;
	sf::RectangleShape hpbar;
	bool hp_state = 0;
	float PI = 3.14159265f, degEn;
	sf::Vector2f DirEn;
	sf::Vector2f DirNormEn;
	sf::Vector2f enemyPosition;
	
	void hpupdate();
	void updateMovement(sf::Sprite tower);
	void generate(sf::Sprite tower,sf::Sprite sea);
	int generateRandom(int max);
	float movePos(float landPos, bool axis);
};
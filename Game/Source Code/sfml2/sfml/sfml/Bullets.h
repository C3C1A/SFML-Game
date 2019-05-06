#pragma once
#include<SFML/Graphics.hpp>
#include "Enemy.h"
class Bullets
{
public:
	Bullets(float radius,float maxSpd);
	~Bullets();
public:
	sf::CircleShape shape;
	sf::Sprite sprite;
	sf::Texture spriteTexture;
	sf::Vector2f currVelocity;
	void follow();
	float maxSpeed;
	
};
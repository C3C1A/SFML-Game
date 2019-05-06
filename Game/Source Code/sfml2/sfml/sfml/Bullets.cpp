#include "Bullets.h"
#include "Enemy.h"
#include "Collision.h"
//LENGTH OF VECTOR: |V| = sqrt(V.x^2 + V.y^2)
//NORMALIZE VECTOR: U = V / |V|


Bullets::Bullets(float radius,float maxSpd)
	: currVelocity(0.f, 0.f)
{
	this->shape.setRadius(radius);
	this->shape.setFillColor(sf::Color::Red);
	spriteTexture.loadFromFile("images/Reload/Bullet.jpg");
	sprite.setTexture(spriteTexture);
	maxSpeed = maxSpd;
}


Bullets::~Bullets()
{
}


void Bullets::follow()
{
	sprite.setPosition(shape.getPosition());
}
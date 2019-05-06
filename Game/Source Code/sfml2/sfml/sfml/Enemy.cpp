#include "Enemy.h"
#include "Collision.h"
#include "Animation.h"
#include "Bullets.h"
Enemy::Enemy()
{
	rect.setSize(sf::Vector2f(150.0f, 150.0f));
	rect.setOrigin(75, 75);
	rect.setFillColor(sf::Color::White);
	spriteTexture.loadFromFile("images/Enemy/Enemy.png");
	spriteTexture.setSmooth(true);
	sprite.setTexture(spriteTexture);
	sprite.setOrigin(75, 75);

	hpbar.setSize(sf::Vector2f(hp / 1, 15));
	hpbar.setFillColor(sf::Color::Red);
	hpbar.setOrigin(0, 50);
	
}
Enemy::~Enemy()
{
}

void Enemy::hpupdate()
{
	hpbar.setSize(sf::Vector2f(hp / 1, 15));
	hpbar.setPosition(sprite.getPosition().x, sprite.getPosition().y - 55);
}

int Enemy::generateRandom(int max)
{
	int randomNumber = rand();
	float random = (randomNumber % max) + 1;
	int myRandom = random;
	return myRandom;
}


void Enemy::generate(sf::Sprite tower,sf::Sprite sea)
{
	do {
		sprite.setPosition((rand() % 10000 + 1000) - 6000, (rand() % 4750 + 1000) - 3375);
	} while ((Collision::PixelPerfectTest(sprite, tower)) || (Collision::PixelPerfectTest(sprite, sea)));
}

float Enemy::movePos(float landPos, bool axis)
{
	if (axis)	return landPos - sprite.getPosition().y;
	else	return landPos - sprite.getPosition().x;
}

void Enemy::updateMovement(sf::Sprite tower)
{
	if (direction == 1 && tower.getPosition().y < 3700) //move up
	{
		sprite.move(0, -movementSpeed);
		if (Collision::PixelPerfectTest(tower, sprite)) {
			sprite.move(0, movementSpeed*5);
			direction = 2;
		}
	}
	else if (direction == 2 && tower.getPosition().y > -2800) //move down
	{
		sprite.move(0, movementSpeed);
		if (Collision::PixelPerfectTest(tower, sprite)) {
			sprite.move(0, -movementSpeed*5);
			direction = 1;
		}
	}
	else if (direction == 3 && tower.getPosition().x > -5100) //move left
	{
		sprite.move(-movementSpeed, 0);
		if (Collision::PixelPerfectTest(tower, sprite)) {
			sprite.move(movementSpeed*5, 0);
			direction = 4;
		}
	}
	else if (direction == 4 && tower.getPosition().x < 6700) //move right
	{
		sprite.move(movementSpeed, 0);
		if (Collision::PixelPerfectTest(tower, sprite)) {
			sprite.move(-movementSpeed*5, 0);
			direction = 3;
		}
	}
	else
	{
		//No movement
	}

	counterWalking++;
	if (counterWalking == 2)
	{
		counterWalking = 0;
	}

	counter++;
	if (counter >= movementLengh)
	{
		direction = generateRandom(5);
		counter = 0;
	}
}
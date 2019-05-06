#pragma once
#include<SFML/Graphics.hpp>
using namespace sf;
class Character
{
public:
	Character(Texture *texture, Vector2u imageCount, float switchTime);
	~Character();
	void Update(int row, float deltaTime, bool faceRight);

public:
	IntRect uvRect;

private:
	Vector2u currentImage;
	Vector2u imageCount;

	float switchTime;
	float totalTime;
};


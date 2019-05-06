#ifndef ANIMATION_H
#define ANIMATION_H
#include<SFML/Graphics.hpp>
using namespace sf;
class Animation
{
public:
	Animation(Texture *texture, Vector2u imageCount, float switchTime);
	~Animation();
	void Update(int row, float deltaTime, bool faceRight, bool pause);
	int curI();

public:
	IntRect uvRect;
	Vector2u currentImage_pb;

private:
	Vector2u currentImage;
	Vector2u imageCount;

	float switchTime;
	float totalTime;
};

#endif // ANIMATION_H
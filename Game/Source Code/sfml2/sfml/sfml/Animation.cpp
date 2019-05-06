#include "Animation.h"
#include<iostream>
using namespace sf;
Animation::Animation(Texture *texture, Vector2u imageCount, float switchTime)
{
	this->imageCount = imageCount;
	this->switchTime = switchTime;
	totalTime = 0.0f;
	currentImage.x = 0;
	currentImage.y = 0;
	

	uvRect.width = texture->getSize().x / float(imageCount.x);
	uvRect.height = texture->getSize().y / float(imageCount.y);
}

Animation::~Animation()
{
}

void Animation::Update(int row, float deltaTime, bool faceRight, bool pause)
{
	if (row < 0) {
		return;
	}
	currentImage.y = row;
	totalTime += deltaTime;
	if (totalTime >= switchTime)
	{
		currentImage.x++;
		if ((currentImage.x >= imageCount.x) )
		{
			if(!pause)
			currentImage.x = 0;
			if (pause) {
				currentImage.x = imageCount.x - 1;
				currentImage_pb.x = currentImage.x;
			}
		}
		totalTime -= switchTime;
	}
	uvRect.top = currentImage.y*uvRect.height;
	
	if (faceRight) {
		uvRect.left = currentImage.x*uvRect.width;
		uvRect.width = abs(uvRect.width);
	}
	else {
		uvRect.left = (currentImage.x + 1) * abs(uvRect.width);
		uvRect.width = -abs(uvRect.width);
	}
}

int Animation::curI() {
	return currentImage.x;
}
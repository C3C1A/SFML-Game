#pragma once
#include "Entity.h"
class Item
	: public Entity
{
public:
	struct ItemType
	{
		sf::Sprite sprite;
		sf::Texture texture;
		int Type;
	};
	ItemType itemLoad[2];
	sf::Sprite spriteBombLoad;
	std::vector<ItemType> item;
	std::vector<sf::Sprite> spriteBomb;

	Item();
	~Item();
	void add(sf::Vector2f position,int type);
	void draw(sf::RenderWindow *windows);
	int direction = 0;
	int counter = 0;
	float hit_count = 0;
	bool boom_state = 0;

	void update();
	void generate(sf::Sprite tower, sf::Sprite sea);
	float movePos(float landPos, bool axis);

private:
	sf::Texture textureBomb;;
};

#include "Item.h"
#include "Collision.h"
Item::Item()
{
	textureBomb.loadFromFile("images/Item/boom.png");
	spriteBombLoad.setTexture(textureBomb);
	spriteBombLoad.setTexture(textureBomb);
	spriteBombLoad.setOrigin(sf::Vector2f(textureBomb.getSize().x / 2, textureBomb.getSize().y / 2));
	spriteBombLoad.setOrigin(sf::Vector2f(textureBomb.getSize().x / 2, textureBomb.getSize().y / 2));
	spriteBombLoad.setScale(0.5,0.5);
	spriteBombLoad.setScale(0.5, 0.5);

	itemLoad[0].texture.loadFromFile("images/Item/FirstAid.png");
	itemLoad[1].texture.loadFromFile("images/Item/Bullet.png");
	itemLoad[0].sprite.setTexture(itemLoad[0].texture);
	itemLoad[1].sprite.setTexture(itemLoad[1].texture);
	itemLoad[0].sprite.setOrigin(sf::Vector2f(itemLoad[0].texture.getSize().x/2, itemLoad[0].texture.getSize().y / 2));
	itemLoad[1].sprite.setOrigin(sf::Vector2f(itemLoad[1].texture.getSize().x / 2, itemLoad[1].texture.getSize().y / 2));
	itemLoad[0].sprite.setScale(0.25, 0.25);
	itemLoad[1].sprite.setScale(0.5, 0.5);	
}
Item::~Item()
{
}

float Item::movePos(float landPos, bool axis)
{
	if (axis)	return landPos - sprite.getPosition().y;
	else	return landPos - sprite.getPosition().x;
}

void Item::add(sf::Vector2f position, int type)
{
	itemLoad[type].sprite.setPosition(position);
	spriteBombLoad.setPosition(position);
	itemLoad[type].Type = type;

	item.push_back(itemLoad[type]);
	spriteBomb.push_back(spriteBombLoad);
}

void Item::draw(sf::RenderWindow *windows)
{
	for (int i = 0; i < spriteBomb.size(); i++)
	{
		windows->draw(spriteBomb[i]);
	}
	for (int i = 0 ; i < item.size() ; i++ )
	{
		windows->draw(item[i].sprite);
	}

}

void Item::update()
{
	sprite.setScale(3.0 - (0.3*hit_count), 3.0 - (0.3*hit_count));
}

void Item::generate(sf::Sprite tower, sf::Sprite sea)
{
	do {
		sprite.setPosition((rand() % 10000 + 1000) - 6000, (rand() % 4750 + 1000) - 3375);
	} while ((Collision::PixelPerfectTest(sprite, tower)) || (Collision::PixelPerfectTest(sprite, sea)));
}




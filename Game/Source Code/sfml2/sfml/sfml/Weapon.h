#pragma once
#include<SFML/Graphics.hpp>
using namespace sf;
class Weapon
{
public:
	Weapon();
	~Weapon();

public:
	sf::Texture weaponTexture;
	sf::Sprite gun;
};


#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

using namespace std;
class Enteryourname
{
public:
	Enteryourname();
	~Enteryourname();
	sf::String yourname;
	sf::Texture bgTexture,enterTexture,wordTexture, inputTexture;
	sf::Sprite bgSprite, enterSprite,wordSprite, inputSprite;
	sf::Font name_font;
	sf::Text name;
	//bool chEnter = true;
	int runEnter(sf::RenderWindow *window,bool *chEnter);
	Enteryourname(sf::RenderWindow *window);
	sf::RenderWindow *window;
	sf::RectangleShape m_start;
	sf::Texture m_startTexture;
};


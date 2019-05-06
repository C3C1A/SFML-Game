#include "Enteryourname.h"
#include <SFML/Graphics.hpp>


Enteryourname::Enteryourname(sf::RenderWindow *window)
{
	wordTexture.loadFromFile("images/Name/Fire.png");
	wordTexture.setSmooth(true);
	wordSprite.setTexture(wordTexture);
	wordSprite.setOrigin(wordTexture.getSize().x / 2, 0);
	wordSprite.setPosition(800,0);
	inputTexture.loadFromFile("images/Name/Neon.png");
	inputTexture.setSmooth(true);
	inputSprite.setTexture(inputTexture);
	inputSprite.setOrigin(inputTexture.getSize().x / 2, 0);
	inputSprite.setPosition(800,500);
	inputSprite.setScale(0.8, 0.8);
	enterTexture.loadFromFile("images/Name/Bar.png");
	bgTexture.loadFromFile("images/Name/Final.jpg");
	bgSprite.setTexture(bgTexture);
	enterSprite.setTexture(enterTexture);
	enterSprite.setScale(1.8, 1.8);
	enterSprite.setOrigin(sf::Vector2f(enterTexture.getSize().x / 2, 0));
	enterSprite.setPosition((sf::Vector2f(window->getSize().x / 2, 600)));
	name_font.loadFromFile("Fonts/casual.ttf");
	name.setFont(name_font);
	this->window = window;
	m_start.setSize(sf::Vector2f(30, 44));
	m_startTexture.loadFromFile("images/Cursor/m_start.png");
	m_startTexture.setSmooth(true);
	m_start.setTexture(&m_startTexture);
}
int Enteryourname::runEnter(sf::RenderWindow *window,bool *chEnter)
{
	//bool chEnter = true;
	while (*chEnter) {
		window->setMouseCursorVisible(false);
		m_start.setPosition(sf::Mouse::getPosition(*window).x, sf::Mouse::getPosition(*window).y);
		sf::Event event;
		while (window->pollEvent(event)) {
			switch (event.type) {
			case sf::Event::TextEntered:
				if (event.text.unicode == '\b' && yourname.getSize() > 0) {
					yourname.erase(yourname.getSize() - 1, 1);
					std::cout << yourname.getSize() << std::endl;
					name.setFont(name_font);
					name.setString(yourname);
				}
				else if (yourname.getSize() < 10 && event.text.unicode < 127 && event.text.unicode > 32) {
					std::string name_input;
					yourname += static_cast<char>(event.text.unicode);
					name_input += static_cast<char>(event.text.unicode);

					if (event.text.unicode < 128) {
						name.setFont(name_font);
						name.setString(yourname);

					}
				}
				name.setOrigin(sf::Vector2f(name.getGlobalBounds().width / 2, 0));
				name.setCharacterSize(60);
				name.setPosition((sf::Vector2f(window->getSize().x / 2.0, 615)));
				break;

			case sf::Event::KeyPressed:
				if (event.key.code == sf::Keyboard::Return) {//Enter Button
					name.setString(yourname);
					*chEnter = false;
					return 1;
				}
				break;

			case sf::Event::Closed:
				window->close();
				break;

			case sf::Event::MouseButtonReleased:
				if (event.mouseButton.button == sf::Mouse::Left) {
					if (m_start.getPosition().x > 1238 && m_start.getPosition().x < 1559 && m_start.getPosition().y > 705 && m_start.getPosition().y < 884) {
						*chEnter = false;
						return 1;
						break;
					}
					else if (m_start.getPosition().x > 19 && m_start.getPosition().x < 392 && m_start.getPosition().y > 696 && m_start.getPosition().y < 878) {
						*chEnter = false;
						return 0;
						break;
					}
				}
			}
		}
		
		window->clear();
		window->draw(bgSprite);
		window->draw(enterSprite);
		window->draw(wordSprite);
		window->draw(name);
		window->draw(inputSprite);
		window->draw(m_start);
		window->display();
	}
}


Enteryourname::~Enteryourname()
{
}


Enteryourname::Enteryourname()
{
}


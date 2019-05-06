//#include <SFML/Graphics.hpp>
//#include <SFML/Audio.hpp>
//#include <SFML/Network.hpp>
//#include <SFML/System.hpp>
//#include <SFML/Window.hpp>
//#include "Animation.h"
//#include <iostream>
//#include <time.h>
//#include "Collision.h"
//#include "Character.h"
//#include <windows.h> 
//#include <math.h>
//#include <vector>
//#include <cstdlib>
//#include "Bullets.h"
//#include "Enemy.h"
//#include "Entity.h"
//#include "Item.h"
//#include "Enteryourname.h"
//
//bool Loading = true;
//int c = 0;
//
//void bg_loading() {
//	sf::RenderWindow window(sf::VideoMode(1600, 900), "Hell Me : Loading . . .");
//	window.setFramerateLimit(60);
//	Image icon;
//	icon.loadFromFile("images/Icon/Icon.png");
//	window.setIcon(200, 200, icon.getPixelsPtr());
//
//	sf::Texture startGTexture;
//	startGTexture.loadFromFile("images/Start/Start-1.jpg");
//	startGTexture.setSmooth(true);
//	sf::Sprite startG;
//	startG.setTexture(startGTexture);
//	sf::RectangleShape load(sf::Vector2f(50, 50));
//	load.setFillColor(sf::Color::Red);
//	load.setPosition(0, 850);
//
//	while (Loading) {
//		load.setScale(c, 1);
//		window.clear();
//		window.draw(startG);
//		window.draw(load);
//		window.display();
//	}
//}
//
//void game_loading() {
//	sf::RenderWindow window(sf::VideoMode(1600, 900), "Hell Me : LOADING . . .");
//	window.setFramerateLimit(60);
//	Image icon;
//	icon.loadFromFile("images/Icon/Icon.png");
//	window.setIcon(200, 200, icon.getPixelsPtr());
//
//	sf::Texture startGTexture;
//	startGTexture.loadFromFile("images/Start/Gloading.jpg");
//	startGTexture.setSmooth(true);
//	sf::Sprite startG;
//	startG.setTexture(startGTexture);
//	while (Loading) {
//		window.clear();
//		window.draw(startG);
//		window.display();
//	}
//}
//
//int main()
//{
//	sf::Thread opthread(&bg_loading), gamethread(&game_loading);
//	opthread.launch();
//	Loading = true;
//
//	sf::RenderWindow window(sf::VideoMode(1600, 900), "Hell Me");
//	window.setFramerateLimit(60);
//	Image icon;
//	icon.loadFromFile("images/Icon/Icon.png");
//	window.setIcon(200, 200, icon.getPixelsPtr());
//	srand(time(NULL));
//	sf::View view(sf::Vector2f(0, 0), sf::Vector2f(1600, 900));
//
//	//-------------------------------- OP : LOAD ------------------------------------
//	sf::Texture startGTexture;
//	startGTexture.loadFromFile("images/Start/Start-2.jpg");
//	startGTexture.setSmooth(true);
//	sf::Sprite startG;
//	startG.setTexture(startGTexture);
//	Animation start(&startGTexture, sf::Vector2u(2, 1), 0.5f);
//	c++;
//
//
//	//m_start
//	sf::RectangleShape m_start(sf::Vector2f(30, 44));
//	sf::Texture m_startTexture;
//	m_startTexture.loadFromFile("images/Cursor/m_start.png");
//	m_startTexture.setSmooth(true);
//	m_start.setTexture(&m_startTexture);
//	c++;
//
//
//	//-------------------------------- Menu : LOAD ------------------------------------
//	sf::Texture menuTexture;
//	menuTexture.loadFromFile("images/Start/Menu.jpg");
//	menuTexture.setSmooth(true);
//	sf::Sprite menu;
//	menu.setScale(2, 2);
//	menu.setTexture(menuTexture);
//	Animation menu_ani(&menuTexture, sf::Vector2u(8, 1), 0.01f);
//	c++;
//
//	sf::Texture menuTexture_sp, menuTexture_NM;
//	menuTexture_NM.loadFromFile("images/Start/MenuText.png");
//	menuTexture_sp.loadFromFile("images/Start/MenuText-Sprite.png");
//	menuTexture_NM.setSmooth(true);
//	menuTexture_sp.setSmooth(true);
//	sf::Sprite spmenu_sp, spmenu_NM;
//	spmenu_NM.setTexture(menuTexture_NM);
//	spmenu_sp.setTexture(menuTexture_sp);
//	spmenu_sp.setPosition(773, 0);
//	Animation spmenu_ani(&menuTexture_sp, sf::Vector2u(1, 3), 0.f);
//	c++;
//
//
//	//-------------------------------- How : LOAD ------------------------------------
//	sf::Texture howBGTexture, howTexture;
//	howBGTexture.loadFromFile("images/How/How_bg.jpg");
//	howBGTexture.setSmooth(true);
//	howTexture.loadFromFile("images/How/How_sp.png");
//	howTexture.setSmooth(true);
//	sf::Sprite howBG, how;
//	howBG.setTexture(howBGTexture);
//	how.setTexture(howTexture);
//	how.setScale(2, 2);
//	Animation how_ani(&howTexture, sf::Vector2u(2, 3), 1.0f);
//	c++;
//
//
//	//-------------------------------- Name : LOAD ------------------------------------
//	sf::String yourname;
//	sf::Text name;
//	sf::Font name_font;
//	name_font.loadFromFile("fonts/Waffle Regular.otf");
//	c++;
//
//
//	//---------------------------------- Game : LOAD --------------------------------------
//	//Built Map
//	//-----Sea-----
//	int seaX, seaY;
//	sf::Sprite sea;
//	sf::Texture seaTexture;
//	seaTexture.loadFromFile("images/Map/Sea-2.png");
//	seaTexture.setSmooth(true);
//	sea.setTexture(seaTexture);
//	sea.setScale(2, 2);
//	sea.setOrigin(3000, 1687.5);
//	c++;
//	//-----Land-----
//	sf::Sprite land;
//	sf::Texture landTexture;
//	landTexture.loadFromFile("images/Map/Land-2.png");
//	landTexture.setSmooth(true);
//	land.setTexture(landTexture);
//	land.setScale(2, 2);
//	land.setOrigin(3000, 1687.5);
//	c++;
//	//-----Tower-----
//	sf::Texture towerTexture;
//	towerTexture.loadFromFile("images/Map/Tower-2.png");
//	towerTexture.setSmooth(true);
//	sf::Sprite tower;
//	tower.setTexture(towerTexture);
//	tower.setScale(2, 2);
//	tower.setOrigin(3000, 1687.5);
//	c++;
//	//-----Tree-----
//	sf::Sprite tree;
//	sf::Texture treeTexture;
//	treeTexture.loadFromFile("images/Map/Tree-2.png");
//	treeTexture.setSmooth(true);
//	tree.setTexture(treeTexture);
//	tree.setScale(2, 2);
//	tree.setOrigin(3000, 1687.5);
//	c++;
//
//
//	//Built Character_NM
//	sf::Texture playerTexture;
//	playerTexture.loadFromFile("images/Character/Player.png");
//	playerTexture.setSmooth(true);
//	sf::Sprite player;
//	player.setTexture(playerTexture);
//	player.setOrigin(55, 55);
//	player.setPosition(300,300);
//	c++;
//
//
//	//Knuckle
//	sf::Texture knuckleTexture;
//	knuckleTexture.loadFromFile("images/Character/Sprite_Attack.png");
//	knuckleTexture.setSmooth(true);
//	sf::Vector2u knuckleSize;
//	knuckleSize = knuckleTexture.getSize();
//	knuckleSize.y /= 3;
//	sf::Sprite knuckle;
//	knuckle.setTexture(knuckleTexture);
//	knuckle.setOrigin(55, 55);
//	knuckle.setPosition(player.getPosition());
//	knuckle.setTextureRect(sf::IntRect(0, 0, knuckleSize.x, knuckleSize.y));
//	c++;
//
//
//	//Gun
//	sf::Texture gunTexture;
//	gunTexture.loadFromFile("images/Character/Gun.png");
//	gunTexture.setSmooth(true);
//	sf::Sprite gun;
//	gun.setTexture(gunTexture);
//	gun.setOrigin(75, 75);
//	gun.setPosition(player.getPosition());
//
//
//	//Built MiniMap
//	sf::RectangleShape minimap(sf::Vector2f(756, 427.875));
//	minimap.setPosition(view.getSize().x / 2, view.getSize().y / 2);
//	minimap.setOrigin(378, 213.9375);
//	sf::Texture minimapTexture;
//	minimapTexture.loadFromFile("images/Map/MiniMap.jpg");
//	minimapTexture.setSmooth(true);
//	minimap.setTexture(&minimapTexture);
//	c++;
//
//
//	//Built MiniCharater
//	sf::CircleShape miniplayer(4.0f);
//	miniplayer.setFillColor(sf::Color::Red);
//	miniplayer.setOrigin(sf::Vector2f(4, 4));
//	miniplayer.setPosition((player.getPosition().x - 800) / -16 + 800, (player.getPosition().y - 450) / -16 + 450);
//	c++;
//
//
//	//XY-Axis
//	sf::Font font;
//	font.loadFromFile("fonts/TAHOMA.TTF");
//	sf::Text xy_axis_text;
//	xy_axis_text.setFont(font);
//	xy_axis_text.setCharacterSize(10);
//	xy_axis_text.setPosition(view.getSize().x - 120, view.getSize().y - 890);
//	xy_axis_text.setFillColor(sf::Color::Black);
//	xy_axis_text.setStyle(sf::Text::Bold);
//	c++;
//
//
//	//Crosshair
//	sf::RectangleShape crosshair(sf::Vector2f(175, 175));
//	sf::Texture crosshairTexture;
//	crosshair.setOrigin(87.5, 87.5);
//	crosshairTexture.loadFromFile("images/Cursor/Crosshair.png");
//	crosshairTexture.setSmooth(true);
//	crosshair.setTexture(&crosshairTexture);
//	bool m_state = 1;
//	c++;
//
//
//	//Bullets
//	bool gun_state = 0;
//	Bullets b1(3.f, 30.f);
//	std::vector<Bullets> bullets;
//	//Vectors
//	sf::Vector2f gunCenter;
//	sf::Vector2f mousePosWindow;
//	sf::Vector2f aimDir;
//	sf::Vector2f aimDirNorm;
//	float PI = 3.14159265f, deg;
//	c++;
//	sf::Texture reloadTexture;
//	reloadTexture.loadFromFile("images/Reload/Reload.png");
//	reloadTexture.setSmooth(true);
//	sf::Sprite reload_s;
//	reload_s.setTexture(reloadTexture);
//	reload_s.setOrigin(64, 64);
//	reload_s.setPosition(800, 450);
//	Animation reload_ani(&reloadTexture, sf::Vector2u(3, 1), 1.0f);
//
//
//
//	//Enemies
//	Bullets bEn(3.f, 20.f);
//	std::vector<Bullets> bulletsEn;
//	Vector2f playerPosition;
//	Vector2f enemyPosition;
//	Vector2f DirEn;
//	Vector2f DirNormEn;
//	float degEn;
//	int counter = 0;
//	std::vector<Enemy>::const_iterator iter_enemy;
//	std::vector<Enemy> enemyArray;
//	class Enemy enemy;
//	for (int i = 0; i < 15; i++) {
//		enemy.generate(tower, sea);
//		enemyArray.push_back(enemy);
//	}
//	c++;
//
//
//	//item
//	std::vector<Item>::const_iterator iter_item;
//	std::vector<Item> itemArray, i_boomArray, i_firstaidArray;
//
//	class Item item, i_boom, i_firstaid;
//	item.spriteTexture.loadFromFile("images/Item/Item.png");
//	item.spriteTexture.setSmooth(true);
//	item.sprite.setTexture(item.spriteTexture);
//	item.sprite.setScale(3.f, 3.f);
//
//	for (int i = 0; i < 50; i++) {
//		item.generate(tower, sea);
//		itemArray.push_back(item);
//		i_boom.sprite.setPosition(item.sprite.getPosition());
//		i_boomArray.push_back(i_boom);
//		i_firstaid.sprite.setPosition(item.sprite.getPosition());
//		i_firstaidArray.push_back(i_firstaid);
//	}
//	c++;
//	//F Button
//	sf::Texture fTexture;
//	fTexture.loadFromFile("images/Item/F.png");
//	fTexture.setSmooth(true);
//	sf::Sprite f;
//	f.setTexture(fTexture);
//	f.setOrigin(40, 40);
//	f.setPosition(800, 700);
//
//
//	//HP Bar
//	int hp = 45100;
//	sf::RectangleShape hpbar(sf::Vector2f(hp / 100, 50));
//	hpbar.setFillColor(Color::Green);
//	hpbar.setOrigin(0, 25);
//	//hpbar.setPosition(575.5, 819);
//	hpbar.setPosition(view.getSize().x / 2, view.getSize().y/2);
//	sf::Texture hpTexture;
//	hpTexture.loadFromFile("images/UI/HP_Bar.png");
//	hpTexture.setSmooth(true);
//	sf::Sprite hp_sp;
//	hp_sp.setTexture(hpTexture);
//	hp_sp.setOrigin(232.5, 41);
//	hp_sp.setPosition(800, 820);
//	sf::Shader shader;
//	shader.loadFromFile("tint.frag", sf::Shader::Fragment);
//	shader.setUniform("flashColor", sf::Glsl::Vec4(0, 1, 0, 1));
//	c++;
//
//
//	//Music
//	sf::SoundBuffer opBuf, songBuf, bangBuf;
//	opBuf.loadFromFile("/sounds/OP.wav");
//	songBuf.loadFromFile("/sounds/HavestMoon.wav");
//	bangBuf.loadFromFile("/sounds/menu_gunshot.wav");
//	sf::Sound op, song, bang;
//	op.setBuffer(opBuf);
//	//op.play();
//	op.setVolume(80);
//	op.setLoop(true);
//	song.setVolume(80);
//	song.setLoop(true);
//	c++;
//
//
//	//------------ UI -------------
//	sf::RectangleShape p_countRect(sf::Vector2f(180, 180));
//	p_countRect.setFillColor(sf::Color(0, 0, 0, 50));
//	p_countRect.setPosition(10, 10);
//
//	sf::RectangleShape b_countRect(sf::Vector2f(150, 150));
//	b_countRect.setOrigin(150, 150);
//	b_countRect.setFillColor(sf::Color(0, 0, 0, 50));
//	b_countRect.setPosition(window.getSize().x - 10, window.getSize().y - 10);
//
//	sf::RectangleShape firstaid_countRect(sf::Vector2f(100, 40));
//	firstaid_countRect.setOrigin(100, 0);
//	firstaid_countRect.setFillColor(sf::Color(0, 0, 0, 50));
//	firstaid_countRect.setPosition(window.getSize().x - 10, 70);
//
//	sf::RectangleShape bullet_countRect(sf::Vector2f(100, 40));
//	bullet_countRect.setOrigin(100, 0);
//	bullet_countRect.setFillColor(sf::Color(0, 0, 0, 50));
//	bullet_countRect.setPosition(window.getSize().x - 10, 70);
//	//-----------------------------
//
//
//
//	//VAR
//	int page = 0, check_ani = 0;
//	int collis = 0;
//	int direct = 0, stop = 0;
//	sf::Clock clock;
//	float deltaTime = 0.0f;
//	int music_count = 0;
//	float reloadTime = 0.0f, delayTime = 0.0f, knuckleTime = 0.f;
//	float delayTimeEn[15];
//	for (int i = 0; i < 15; i++)	delayTimeEn[i] = 0;
//	bool pressed = 0;
//	bool pauseGame = false;
//	c++;
//
//
//	//Ammo
//	int ammo[] = { 0,40 }, ammo_full[] = { 30,40 }, magazine[] = { 30,40 }, reload[2];
//	bool reload_state = 0;
//
//
//	//Move_Speed
//	float j_crosshair = 3.0;
//	float p_move = 10.f, sea_move = 3.f;
//	float moveSpd = p_move;
//	c++;
//
//	Enteryourname enteryourname(&window);
//	bool nameCheck = 1;
//
//	Loading = false;
//	opthread.wait();
//	Loading = true;
//
//
//	goto Main;
//	//------------------------------------ Main --------------------------------------------
//Main:
//
//	while (window.isOpen()) {
//		deltaTime = clock.restart().asSeconds();
//		window.setMouseCursorVisible(false);
//
//		sf::Event evnt;
//		while (window.pollEvent(evnt)) {
//			if (evnt.type == sf::Event::Closed)	window.close();
//		}
//
//
//		//--------------------------------------- Page 0 : Start ------------------------------------------
//		while (page == 0) {
//			m_start.setPosition(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y);
//			sf::Event ev_start;
//			while (window.pollEvent(ev_start)) {
//				switch (ev_start.type) {
//				case sf::Event::KeyReleased:
//					bang.play();
//					goto Menu;
//					break;
//				case sf::Event::Closed:
//					op.stop();
//					window.close();
//				}
//			}
//			window.clear();
//			start.Update(0, deltaTime, true, false);
//			startG.setTextureRect(start.uvRect);
//			window.draw(startG);
//			window.draw(m_start);
//			window.display();
//		}
//	}
//
//
//	//--------------------------------------- Menu ------------------------------------------
//Menu:
//
//	while (window.isOpen()) {
//		deltaTime = clock.restart().asSeconds();
//		window.setMouseCursorVisible(false);
//		m_start.setPosition(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y);
//		sf::Event ev_menu;
//		while (window.pollEvent(ev_menu)) {
//			switch (ev_menu.type) {
//			case sf::Event::Closed:
//				window.close();
//				break;
//			case sf::Event::MouseButtonReleased:
//				if (ev_menu.mouseButton.button == sf::Mouse::Left) {
//					if (m_start.getPosition().x > 1191 && m_start.getPosition().x < 1486 && m_start.getPosition().y > 179 && m_start.getPosition().y < 279) {
//						//bang.play();
//						goto Name;
//						break;
//					}
//					else if (m_start.getPosition().x > 930 && m_start.getPosition().x < 1485 && m_start.getPosition().y > 422 && m_start.getPosition().y < 484) {
//						//bang.play();
//						goto How;
//						break;
//					}
//					else if (m_start.getPosition().x > 1353 && m_start.getPosition().x < 1485 && m_start.getPosition().y > 642 && m_start.getPosition().y < 702) {
//						op.stop();
//						window.close();
//					}
//				}
//			}
//		}
//		window.clear();
//		menu_ani.Update(0, deltaTime, true, true);
//		menu.setTextureRect(menu_ani.uvRect);
//		window.draw(menu);
//		if (menu_ani.curI() == 7) {
//			window.draw(spmenu_NM);
//			spmenu_sp.setTextureRect(spmenu_ani.uvRect);
//			if (m_start.getPosition().x > 1191 && m_start.getPosition().x < 1486 && m_start.getPosition().y > 179 && m_start.getPosition().y < 279) {
//				spmenu_ani.Update(0, deltaTime, true, false);
//				window.draw(spmenu_sp);
//			}
//			if (m_start.getPosition().x > 930 && m_start.getPosition().x < 1485 && m_start.getPosition().y > 422 && m_start.getPosition().y < 484) {
//				spmenu_ani.Update(1, deltaTime, true, false);
//				window.draw(spmenu_sp);
//			}
//			if (m_start.getPosition().x > 1353 && m_start.getPosition().x < 1485 && m_start.getPosition().y > 642 && m_start.getPosition().y < 702) {
//				spmenu_ani.Update(2, deltaTime, true, false);
//				window.draw(spmenu_sp);
//			}
//		}
//		window.draw(m_start);
//		window.display();
//	}
//
//
//	//-------------------------------- Input Name -------------------------------------------
//Name:
//
//	if (enteryourname.runEnter(&window, &nameCheck) == 1) {
//		goto Game;
//	}
//	else
//	{
//		goto Menu;
//	}
//
//
//	//--------------------------------- How to Play ------------------------------------------
//How:
//
//	while (window.isOpen()) {
//		deltaTime = clock.restart().asSeconds();
//		window.setMouseCursorVisible(false);
//		m_start.setPosition(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y);
//		direct = 0;
//		sf::Event ev_how;
//		while (window.pollEvent(ev_how)) {
//			switch (ev_how.type) {
//			case sf::Event::Closed:
//				op.stop();
//				window.close();
//				break;
//			case sf::Event::MouseButtonReleased:
//				if (ev_how.mouseButton.button == sf::Mouse::Left) {
//					if (m_start.getPosition().x > 1344 && m_start.getPosition().x < 1580 && m_start.getPosition().y > 788 && m_start.getPosition().y < 874) {
//						bang.play();
//						goto Game;
//						break;
//					}
//					else if (m_start.getPosition().x > 1440 && m_start.getPosition().x < 1563 && m_start.getPosition().y > 26 && m_start.getPosition().y < 125) {
//						bang.play();
//						goto Menu;
//						break;
//					}
//				}
//			}
//		}
//		if (m_start.getPosition().x > 1344 && m_start.getPosition().x < 1580 && m_start.getPosition().y > 788 && m_start.getPosition().y < 874) {
//			direct = 2;
//		}
//		if (m_start.getPosition().x > 1440 && m_start.getPosition().x < 1563 && m_start.getPosition().y > 26 && m_start.getPosition().y < 125) {
//			direct = 1;
//		}
//		window.clear();
//		window.draw(howBG);
//		how_ani.Update(direct, deltaTime, true, false);
//		how.setTextureRect(how_ani.uvRect);
//		window.draw(how);
//		window.draw(m_start);
//		window.display();
//	}
//
//	//-------------------------------- Game Start --------------------------------------------
//Game:
//
//	if (Loading) {
//		gamethread.launch();
//	}
//	while (window.isOpen()) {
//		deltaTime = clock.restart().asSeconds();
//		reloadTime += deltaTime;
//		delayTime += deltaTime;
//		knuckleTime += deltaTime;
//		window.setMouseCursorVisible(false);
//		sf::Event ev_game;
//		while (window.pollEvent(ev_game)) {
//			switch (ev_game.type) {
//			case sf::Event::KeyReleased:
//				pressed = false;
//				break;
//
//			case sf::Event::MouseButtonReleased:
//				pressed = false;
//				break;
//			case sf::Event::Closed:
//				song.stop();
//				window.close();
//				break;
//			}
//			if (Keyboard::isKeyPressed(Keyboard::Key::P)) {
//				pauseGame = true;
//			}
//		}
//		if (Keyboard::isKeyPressed(Keyboard::Key::P)) {
//			pauseGame = 1;
//		}
//		while (pauseGame) {
//			while (window.pollEvent(ev_game)) {
//				if (ev_game.type == sf::Event::KeyPressed && ev_game.key.code == sf::Keyboard::Escape && !pressed) {
//					pauseGame = 0;
//					clock.restart();
//				}
//			}
//		}
//
//		if (music_count == 1)	song.play();
//
//		//Vectors : Player
//		gunCenter = Vector2f(gun.getPosition());
//		mousePosWindow = Vector2f(Mouse::getPosition(window));
//		aimDir = mousePosWindow - gunCenter;
//		aimDirNorm = aimDir / sqrt(pow(aimDir.x, 2) + pow(aimDir.y, 2));
//		deg = atan2(aimDirNorm.y, aimDirNorm.x) * 180 / PI;
//		player.setRotation(deg + 90);
//		knuckle.setRotation(deg + 90);
//		gun.setRotation(deg + 90);
//
//
//		//Character_Control
//		if (!Collision::PixelPerfectTest(tower, player)) {
//			if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W) || (sf::Joystick::getAxisPosition(0, sf::Joystick::Y) < -10)) && sea.getPosition().y < 3700) {
//				player.move(0.0f, -moveSpd);
//				miniplayer.move(0, -0.0625*moveSpd);
//				
//				direct = 0;
//			}
//			if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S) || (sf::Joystick::getAxisPosition(0, sf::Joystick::Y) > 10)) && sea.getPosition().y > -2800) {
//				player.move(0.0f, moveSpd);
//				miniplayer.move(0, 0.0625f*moveSpd);
//				direct = 1;
//			}
//			if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D) || (sf::Joystick::getAxisPosition(0, sf::Joystick::X) > 10)) && sea.getPosition().x > -5100) {
//				player.move(moveSpd, 0.0f);
//				miniplayer.move(0.0625f*moveSpd, 0);
//				direct = 2;
//			}
//			if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A) || (sf::Joystick::getAxisPosition(0, sf::Joystick::X) < -10)) && sea.getPosition().x < 6700) {
//				player.move(-moveSpd, 0.0f);
//				miniplayer.move(-0.0625f*moveSpd, 0);
//				direct = 3;
//			}
//		}
//		//Walk collision
//		if (Collision::PixelPerfectTest(tower, player)) {
//			if (direct == 0) {
//				player.move(0.0f, moveSpd);
//				miniplayer.move(0, 0.0625f*moveSpd);
//			}
//			if (direct == 1) {
//				player.move(0.0f, -moveSpd);
//				miniplayer.move(0, -0.0625*moveSpd);
//			}
//			if (direct == 2) {
//				player.move(-moveSpd, 0.0f);
//				miniplayer.move(-0.0625f*moveSpd, 0);
//			}
//			if (direct == 3) {
//				player.move(moveSpd, 0.0f);
//				miniplayer.move(0.0625f*moveSpd, 0);
//			}
//			std::cout << direct << std::endl;
//		}
//
//
//		//Collision_Display_cmd
//		if (Collision::PixelPerfectTest(sea, player)) {
//			moveSpd = sea_move;
//		}
//		if (!Collision::PixelPerfectTest(sea, player)) {
//			moveSpd = p_move;
//		}
//
//
//		view.setCenter(player.getPosition());
//		window.clear();
//		window.setView(view);
//		window.draw(sea); //Draw Sea
//		window.draw(land); //Draw Land
//
//
//		//Draw Item
//		for (counter = 0; counter < itemArray.size(); counter++) {
//			itemArray[counter].update();
//			window.draw(itemArray[counter].sprite);
//		}
//
//
//		item.draw(&window);
//
//
//		//Generate Enemy
//		for (counter = 0; counter < enemyArray.size(); counter++)
//		{
//			delayTimeEn[counter] += deltaTime;
//
//			enemyPosition = Vector2f(enemyArray[counter].sprite.getPosition());
//			playerPosition = Vector2f(player.getPosition());
//			DirEn = playerPosition - enemyPosition;
//			DirNormEn = DirEn / sqrt(pow(DirEn.x, 2) + pow(DirEn.y, 2));
//			degEn = atan2(DirNormEn.y, DirNormEn.x) * 180 / PI;
//			enemyArray[counter].sprite.setRotation(degEn + 90);
//
//			if (delayTimeEn[counter] >= 3.f && (abs(DirEn.x) <= 800 && abs(DirEn.y) <= 450)) {
//				bEn.shape.setPosition(enemyPosition);
//				bEn.currVelocity = DirNormEn * bEn.maxSpeed;
//				bulletsEn.push_back(bEn);
//				delayTimeEn[counter] = 0.f;
//			}
//		}
//		for (size_t i = 0; i < bulletsEn.size(); i++) {
//			bulletsEn[i].follow();
//			bulletsEn[i].shape.move(bulletsEn[i].currVelocity);
//			if (Collision::PixelPerfectTest(player, bulletsEn[i].sprite)) {
//				hp -= 4510;
//				//if (hp <= 0)	goto Dead;
//			}
//			if (bulletsEn[i].shape.getPosition().x < enemyPosition.x - 800
//				|| bulletsEn[i].shape.getPosition().x > enemyPosition.x + 800
//				|| bulletsEn[i].shape.getPosition().y < enemyPosition.y - 800
//				|| bulletsEn[i].shape.getPosition().y > enemyPosition.y + 800
//				|| Collision::PixelPerfectTest(tower, bulletsEn[i].sprite)
//				|| Collision::PixelPerfectTest(player, bulletsEn[i].sprite))
//			{
//				bulletsEn.erase(bulletsEn.begin() + i);
//			}
//		}
//		for (size_t i = 0; i < bulletsEn.size(); i++)
//		{
//			bulletsEn[i].follow();
//			window.draw(bulletsEn[i].shape); //Draw Bullets
//		}
//
//
//		//Shooting
//		if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && delayTime >= 0.2f && gun_state == 1) {
//
//			b1.shape.setPosition(gunCenter);
//			b1.currVelocity = aimDirNorm * b1.maxSpeed;
//			if (ammo[0] > 0) {
//				bullets.push_back(Bullets(b1));
//				delayTime = 0.f;
//				ammo[0]--;
//				//std::cout << ammo[0] << " / " << magazine[0] << std::endl;
//			}
//		}
//		for (size_t i = 0; i < bullets.size(); i++) {
//			bullets[i].shape.move(bullets[i].currVelocity);
//			bullets[i].follow();
//			for (counter = 0; counter < enemyArray.size(); counter++) {
//				if (Collision::PixelPerfectTest(enemyArray[counter].sprite, bullets[i].sprite))
//				{
//					bullets[i].shape.move(1000, 1000);
//					enemyArray[counter].hp_state = 1;
//					enemyArray[counter].hp -= 50;
//					if (enemyArray[counter].hp <= 0)	enemyArray.erase(enemyArray.begin() + counter);
//					break;
//				}
//			}
//			if (bullets[i].shape.getPosition().x < gunCenter.x - 800
//				|| bullets[i].shape.getPosition().x > gunCenter.x + 800
//				|| bullets[i].shape.getPosition().y < gunCenter.y - 800
//				|| bullets[i].shape.getPosition().y > gunCenter.y + 800
//				|| Collision::PixelPerfectTest(tower, bullets[i].sprite))
//			{
//				bullets.erase(bullets.begin() + i);
//			}
//		}
//		for (size_t i = 0; i < bullets.size(); i++) {
//			bullets[i].follow();
//			window.draw(bullets[i].shape);//Draw Bullet - Player
//		}
//
//
//		//Draw Enemy
//		for (counter = 0; counter < enemyArray.size(); counter++)
//		{
//			enemyArray[counter].updateMovement(tower);
//			window.draw(enemyArray[counter].sprite); //Draw Enemy
//			if (enemyArray[counter].hp_state == 1) {
//				enemyArray[counter].hpupdate();
//				window.draw(enemyArray[counter].hpbar);
//			}
//		}
//
//
//		//Gun State
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::E) && !pressed) {
//			gun_state = !gun_state;
//			pressed = 1;
//		}
//		if (gun_state) {
//			window.draw(gun); //Draw Gun
//		}
//		if (gun_state == 0 && !sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && knuckleTime >= 0.2f) {
//			knuckle.setTextureRect(sf::IntRect(0, 0, knuckleSize.x, knuckleSize.y));
//			knuckleTime = 0.f;
//		}
//		else if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && gun_state == 0 && !pressed) {
//			knuckle.setTextureRect(sf::IntRect(0, knuckleSize.y*(rand() % 2 + 1), knuckleSize.x, knuckleSize.y));
//			pressed = 1;
//			for (counter = 0; counter < enemyArray.size(); counter++) {
//				if (Collision::PixelPerfectTest(enemyArray[counter].sprite, knuckle))
//				{
//					enemyArray[counter].hp_state = 1;
//					enemyArray[counter].hp -= 20;
//					if (enemyArray[counter].hp <= 0)	enemyArray.erase(enemyArray.begin() + counter);
//					break;
//				}
//			}
//			for (counter = 0; counter < itemArray.size(); counter++) {
//				if (Collision::PixelPerfectTest(itemArray[counter].sprite, knuckle))
//				{
//					itemArray[counter].hit_count++;
//					if (itemArray[counter].hit_count == 6) {
//
//						item.add(itemArray[counter].sprite.getPosition(), rand() % 2);
//						itemArray.erase(itemArray.begin() + counter);
//					}
//					break;
//				}
//			}
//		}
//		if (gun_state == 0) {
//			knuckle.setPosition(player.getPosition());
//			window.draw(knuckle); //Draw Knuckle
//		}
//		window.draw(player); //Draw Player
//		window.draw(tower); //Draw Tower
//		window.draw(tree); //Draw Tree
//
//
//		//Get Item
//		for (counter = 0; counter < item.item.size(); counter++) {
//			if (Collision::PixelPerfectTest(item.item[counter].sprite, player)
//				|| Collision::PixelPerfectTest(item.item[counter].sprite, knuckle)) {
//				window.draw(f);
//				if (sf::Keyboard::isKeyPressed(sf::Keyboard::F)) {
//					if (item.item[counter].Type == 0)	hp += 2255;
//					else if (item.item[counter].Type == 1)	ammo[0] += rand() % 10 + 1;
//					if (hp > 45100)	hp = 45100;
//					item.item.erase(item.item.begin() + counter);
//				}
//			}
//		}
//
//
//		//Mouse Setup
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::LControl) && sf::Keyboard::isKeyPressed(sf::Keyboard::Key::J) && !pressed) {
//			m_state = !m_state;
//			pressed = 1;
//		}
//		if (m_state == 1) {
//			crosshair.setPosition(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y);
//		}
//		//Joy Setup
//		if (m_state == 0) {
//			if (sf::Joystick::getAxisPosition(0, sf::Joystick::V) < -10 && crosshair.getPosition().y > 2) {  //m_Up
//				crosshair.move(0.0f, -1 * j_crosshair);
//			}
//			if (sf::Joystick::getAxisPosition(0, sf::Joystick::V) > 10 && crosshair.getPosition().y < 896) { //m_Down
//				crosshair.move(0.0f, j_crosshair);
//			}
//			if (sf::Joystick::getAxisPosition(0, sf::Joystick::U) > 10 && crosshair.getPosition().x < 1597) { //m_Right
//				crosshair.move(j_crosshair, 0.0f);
//			}
//			if (sf::Joystick::getAxisPosition(0, sf::Joystick::U) < -10 && crosshair.getPosition().x > 3) { //m_Left
//				crosshair.move(-1 * j_crosshair, 0.0f);
//			}
//		}
//
//
//		if (hp == 45100) {
//			shader.setUniform("flashColor", sf::Glsl::Vec4(0, 1, 0, 1));
//		}
//		else if (hp < 45100 && hp > 18000) {
//			shader.setUniform("flashColor", sf::Glsl::Vec4(1, 1, 0, 1));
//		}
//		else if (hp < 18000) {
//			shader.setUniform("flashColor", sf::Glsl::Vec4(1, 0, 0, 1));
//		}
//		//Draw HP
//		hpbar.setSize(sf::Vector2f(hp / 100, 50));
//		window.draw(hpbar, &shader); //Draw HPbar
//		window.draw(hp_sp); //Draw HP
//
//
//		window.draw(crosshair); //Draw Mouse
//
//
//		//Minimap_Display
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::M) || sf::Joystick::isButtonPressed(0, 4)) {
//			window.draw(minimap);
//			window.draw(miniplayer);
//		}
//
//		//**************************** UI *******************************
//		window.draw(p_countRect);
//		window.draw(b_countRect);
//		window.draw(firstaid_countRect);
//		xy_axis_text.setString("X : " + std::to_string((int)land.getPosition().x) + "   Y : " + std::to_string((int)land.getPosition().y));
//		window.draw(xy_axis_text);
//		//***************************************************************
//		window.display();
//		Loading = false;
//		gamethread.wait();
//		op.stop();
//		music_count++;
//	}
//	return 0;
//}

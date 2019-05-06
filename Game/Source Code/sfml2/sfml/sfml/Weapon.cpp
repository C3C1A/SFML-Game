#include "Weapon.h"
#include <time.h>
#include "Collision.h"

Weapon::Weapon()
{
	weaponTexture.loadFromFile("images/Weapon/Item.png");
	weaponTexture.setSmooth(true);
	gun.setTexture(weaponTexture);
	gun.setOrigin(0, 0);
}


Weapon::~Weapon()
{
}
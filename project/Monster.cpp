#include "Monster.h"
#include <string>

Monster::Monster(std::string name, int hp, int maxhp, int strenght, int agility, int level, int damage, int mana, bool weapon_is, Weapon weapon) : Character(name, hp, maxhp, strenght, agility, level, damage, weapon) {
	this->mana = mana;
	this->weapon_is = weapon_is;
	this->weapon = weapon;
}
#pragma once
#include "Character.h"
#include "Weapon.h"
#include <string>

class Monster : public Character {
private:
	int mana;
	bool weapon_is;
	Weapon weapon;
public:
	Monster(std::string name, int hp, int maxhp, int strenght, int agility, int level, int damage, int mana, bool weapon_is, Weapon weapon);
};
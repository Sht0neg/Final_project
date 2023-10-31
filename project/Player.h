#pragma once
#include "Character.h"
#include "Weapon.h"
#include <string>
//#include "Armor.h"

class Player : public Character {
private:
	int weight;
	int exp;
	int mana;
	Weapon weapon;
	int intelegance;
	int stamina;
	int maxstamina;
public:
	Player(std::string name, int hp, int maxhp, int strenght, int agility, int level, int damage, int weight, int exp, int mana, Weapon weapon, int intelegance, int stamina);
};
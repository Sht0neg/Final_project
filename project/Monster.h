#pragma once
#include "Character.h"
#include "Weapon.h"
#include <string>

class Monster : public Character {
private:
	int exp;
	bool weapon_is;
	Weapon* weapon;
public:
	Monster(std::string name, int hp, int strenght, int agility, int level, int damage, Weapon* weapon, int exp);
	Monster(std::string name, int hp, int strenght, int agility, int level, int damage, int exp);
	bool getWeaponState();
	void setWeaponState(bool state);
	Weapon* getWeapon();
	void setWeapon(Weapon* weapon);
	int getExp();
	void setExp(int exp);
};
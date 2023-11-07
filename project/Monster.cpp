#include "Monster.h"
#include <string>
#include "Weapon.h"

Monster::Monster(std::string name, int hp, int strenght, int agility, int level, int damage, Weapon* weapon, int exp) : Character(name, hp, strenght, agility, level, damage) {
	if (exp > 0) {
		this->exp = exp;
	}
	else {
		this->exp = -1 * exp;
	}
	this->weapon_is = true;
	this->weapon = weapon;
}

Monster::Monster(std::string name, int hp, int strenght, int agility, int level, int damage, int exp) : Character(name, hp, strenght, agility, level, damage) {
	if (exp > 0) {
		this->exp = exp;
	}
	else {
		this->exp = -1 * exp;
	}
	this->weapon_is = false;
}

bool Monster::getWeaponState() {
	return this->weapon_is;
};
void Monster::setWeaponState(bool state) {
	this->weapon_is = weapon_is;
};
Weapon* Monster::getWeapon() {
	return this->weapon;
};
void Monster::setWeapon(Weapon* weapon) {
	this->weapon = weapon;
};
int Monster::getExp() {
	return this->exp;
};
void Monster::setExp(int exp) {
	if (exp > 0) {
		this->exp = exp;
	}
	else {
		this->exp = -1 * exp;
	}
};
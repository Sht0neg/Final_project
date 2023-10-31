#include "Monster.h"
#include <string>

Monster::Monster(std::string name, int hp, int maxhp, int strenght, int agility, int level, int damage, int mana, bool weapon_is, Weapon weapon) : Character(name, hp, maxhp, strenght, agility, level, damage) {
	this->mana = mana;
	this->weapon_is = weapon_is;
	this->weapon = weapon;
}

int Monster::getMana() {
	return this->mana;
};
void Monster::setMana(int mana) {
	this->mana = mana;
};
bool Monster::getWeaponState() {
	return this->weapon_is;
};
void Monster::setWeaponState(bool state) {
	this->weapon_is = weapon_is;
};
Weapon Monster::getWeapon() {
	return this->weapon;
};
void Monster::setWeapon(Weapon weapon) {
	this->weapon = weapon;
};
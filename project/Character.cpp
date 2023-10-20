#include "Character.h"
#include <string>

Character::Character(std::string name, int hp, int maxhp, int strenght, int agility, int level, int damage) : Entity(name) {
	this->hp = maxhp;
	this->maxhp = maxhp;
	this->strenght = strenght;
	this->agility = agility;
	this->level = level;
	this->damage = damage;
}

int Character::getHP() {
	return this->hp;
};
void Character::setHP(int hp) {
	this->hp = hp;
};
int Character::getMAXHP() {
	return this->maxhp;
};
void Character::setMAXHP(int maxhp) {
	this->maxhp = maxhp;
};
int Character::getStrenght() {
	return this->strenght;
};
void Character::setStrenght(int strenght) {
	this->strenght = strenght;
};
int Character::getAgility() {
	return this->agility;
};
void Character::setAgility(int agility) {
	this->agility = agility;
};
int Character::getLevel() {
	return this->level;
};
void Character::setLevel(int level) {
	this->level = level;
};
int Character::getDamage() {
	return this->damage;
};
void Character::setDamage(int damage) {
	this->damage = damage;
};
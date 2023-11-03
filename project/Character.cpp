#include "Character.h"
#include <string>

Character::Character(std::string name, int hp, int strenght, int agility, int level, int damage) : Entity(name) {
	if (level > 0) {
		this->level = level;
	}
	else {
		this->level = -1 * level;
	}

	if (strenght > 0) {
		this->strenght = strenght + this->level * 2;
	}
	else {
		this->strenght = -1 * strenght + this->level * 2;
	}
	if (agility > 0) {
		this->agility = agility + this->level * 2;
	}
	else {
		this->agility = -1 * agility + this->level * 2;
	}
	
	if (damage > 0) {
		this->damage = damage + this->agility * 3;
	}
	else {
		this->damage = -1 * damage + this->agility * 3;
	}
	if (hp > 0) {
		this->hp = hp + this->strenght * 10;
		this->maxhp = hp + this->strenght * 10;
	}
	else {
		this->hp = -1 * hp + this->strenght * 10;
		this->maxhp = -1 * hp + this->strenght * 10;
	}
}

int Character::getHP() {
	return this->hp;
};
void Character::setHP(int hp) {
	if (hp > 0) {
		this->hp = hp + this->strenght * 10;
	}
	else {
		this->hp = -1 * hp + this->strenght * 10;
	}
};
int Character::getMAXHP() {
	return this->maxhp;
};
void Character::setMAXHP(int maxhp) {
	if (hp > 0) {
		this->maxhp = maxhp + this->strenght * 10;
	}
	else {
		this->maxhp = -1 * maxhp + this->strenght * 10;
	}
};
int Character::getStrenght() {
	return this->strenght;
};
void Character::setStrenght(int strenght) {
	if (strenght > 0) {
		this->strenght = strenght + this->level * 2;
	}
	else {
		this->strenght = -1 * strenght + this->level * 2;
	}
};
int Character::getAgility() {
	return this->agility;
};
void Character::setAgility(int agility) {
	if (agility > 0) {
		this->agility = -1 * agility + this->level * 2;
	}
	else {
		this->agility = -1 * agility + this->level * 2;
	}
};
int Character::getLevel() {
	return this->level;
};
void Character::setLevel(int level) {
	if (level > 0) {
		this->level = level;
	}
	else {
		this->level = -1 * level;
	}
};
int Character::getDamage() {
	return this->damage;
};
void Character::setDamage(int damage) {
	if (damage > 0) {
		this->damage = damage + this->agility * 3;
	}
	else {
		this->damage = -1 * damage + this->agility * 3;
	}
};
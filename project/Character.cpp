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
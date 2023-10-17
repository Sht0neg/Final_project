#pragma once
#include "Entity.h"
#include <string>

class Character : public Entity {
protected:
	int hp;
	int maxhp;
	int strenght;
	int agility;
	int level;
	int damage;
public:
	Character(std::string name, int hp, int maxhp, int strenght, int agility, int level, int damage);
};
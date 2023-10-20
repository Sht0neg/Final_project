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
	int getHP();
	void setHP(int hp);
	int getMAXHP();
	void setMAXHP(int maxhp);
	int getStrenght();
	void setStrenght(int strenght);
	int getAgility();
	void setAgility(int agility);
	int getLevel();
	void setLevel(int level);
	int getDamage();
	void setDamage(int damage);
};
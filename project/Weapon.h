#pragma once
#include "Entity.h"
#include <string>

class Weapon : public Entity {
private:
	int damage;//урон
	int durability;//прочность
	int weight;//вес
	std::string type;//дальность атаки
public:
	Weapon(std::string name, int damage, int durability, int weight, std::string type);

	void print();

	int getDamage();
	void setDamage(int damage);

	int getDurability();
	void setDurability(int durability);

	int getWeight();
	void setWeight(int weight);

	std::string getType();
	void setType(std::string type);
};

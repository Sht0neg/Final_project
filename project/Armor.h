#pragma once
#include <string>
#include "Entity.h"

class Armor : public Entity {
private:
	int armor;//защита
	int durability;//прочность
	int weight;//вес
	int price;
public:
	Armor(int armor, int durability, int weight, int price);

	void print();

	int getArmor();
	void setArmor(int armor);

	int getDurability();
	void setDurability(int durability);

	int getWeight();
	void setWeight(int weight);

	int getPrice();
	void setPrice(int price);
};
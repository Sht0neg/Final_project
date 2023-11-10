#pragma once
#include <string>
#include "Item.h"
#include "Player.h"

class Armor : public Item {
private:
	int durability;//прочность
	int maxdurability;
public:
	Armor(std::string name, int value, int durability, int weight, int price);
	Armor();

	void print();

	int getDurability();
	void setDurability(int durability);

	int getMaxDurability();
	void setMaxDurability(int maxdurability);

	void repair(Player* player);
};
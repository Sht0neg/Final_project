#pragma once
#include "Item.h"
#include <string>
#include "Player.h"

class Weapon : public Item {
private:
	int durability;//прочность
	int maxdurability;
	std::string type;//дальность атаки
public:
	Weapon(std::string name, int value, int durability, int weight, std::string type, int price);
	Weapon();

	void print();

	int getDurability();
	void setDurability(int durability);

	std::string getType();
	void setType(std::string type);

	int getMaxDurability();
	void setMaxDurability(int maxdurability);

	void repair(Player& player);
};

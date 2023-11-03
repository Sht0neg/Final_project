#pragma once
#include <string>
#include "Item.h"

class Armor : public Item {
private:
	int durability;//���������
	int maxdurability;
public:
	Armor(std::string name, int value, int durability, int weight, int price);

	void print();

	int getDurability();
	void setDurability(int durability);

	int getMaxDurability();
	void setMaxDurability(int maxdurability);
};
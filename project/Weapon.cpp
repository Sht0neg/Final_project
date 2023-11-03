#include <iostream>
#include <string>
#include "Weapon.h"

Weapon::Weapon(std::string name, int value, int durability, int weight, std::string type, int price) : Item(name, value, weight, price) {
	if (durability > 0) {
		this->durability = durability;
		this->maxdurability = durability;
	}
	else {
		this->durability = -1 * durability;
		this->maxdurability = -1 * durability;
	}
	this->type = type;
}

void Weapon::print() {
	std::cout << "Урон: " << this->value << "; Прочность: " << this->durability << "; Вес: " << this->weight << "; Тип атаки: " << this->type << "; Цена: " << this->price;
}


int  Weapon::getDurability() {
	return this->durability;
}
void  Weapon::setDurability(int durability) {
	if (durability > 0) {
		this->durability = durability;
	}
	else {
		this->durability = -1 * durability;
	}
}

int  Weapon::getMaxDurability() {
	return this->maxdurability;
};
void  Weapon::setMaxDurability(int maxdurability) {
	if (durability > 0) {
		this->maxdurability = durability;
	}
	else {
		this->maxdurability = -1 * durability;
	}
};

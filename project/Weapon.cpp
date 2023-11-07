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

Weapon::Weapon() {
	this->durability = 0;
	this->maxdurability = 0;
	this->type = "";
}

void Weapon::print() {
	std::cout << "\nID: " << this->id << "; Название: " << this->name << "; Урон: " << this->value << "; Прочность: " << this->durability << "; Вес: " << this->weight << "; Тип атаки: " << this->type << "; Цена: " << this->price;
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

std::string Weapon::getType() {
	return this->type;
};
void Weapon::setType(std::string type) {
	this->type = type;
};

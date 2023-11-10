#include <iostream>
#include <string>
#include "Armor.h"

Armor::Armor(std::string name, int value, int durability, int weight, int price) : Item(name, value, weight, price) {
	if (durability > 0) {
		this->durability = durability;
		this->maxdurability = durability;
	}
	else {
		this->durability = -1 * durability;
		this->maxdurability = -1 * durability;
	}
}

Armor::Armor(){
	this->durability = 0;
}

void Armor::print() {
	std::cout << "\nID: " << this->id << "\n\tНазвание: " << this->name << "\n\tПроцент поглощения урона: " << this->value << "\n\tПрочность: " << this->durability << " / " << this->maxdurability << "\n\tВес: " << this->weight << "\n\tЦена: " << this->price << std::endl;
}

int Armor::getDurability() {
	return this->durability;
}
void Armor::setDurability(int durability) {
	if (durability > 0) {
		this->durability = durability;
	}
	else {
		this->durability = -1 * durability;
	}
}

int Armor::getMaxDurability() {
	return this->maxdurability;
};
void Armor::setMaxDurability(int maxdurability) {
	if (durability > 0) {
		this->maxdurability = durability;
	}
	else {
		this->maxdurability = -1 * durability;
	}
};
#include <iostream>
#include <string>
#include "Armor.h"

Armor::Armor(int armor, int durability, int weight, int price) : Entity(name) {
	this->armor = armor;
	this->durability = durability;
	this->weight = weight;
	this->price = price;
}

void Armor::print() {
	std::cout << "Единиц брони: " << this->armor << "; Прочность: " << this->durability << "; Вес: " << this->weight << "; Цена: " << this->price;
}

int Armor::getArmor() {
	return this->price;
}
void Armor::setArmor(int armor) {
	this->armor = armor;
}

int Armor::getDurability() {
	return this->durability;
}
void Armor::setDurability(int durability) {
	this->durability = durability;
}

int Armor::getWeight() {
	return this->durability;
}
void Armor::setWeight(int weight) {
	this->weight = weight;
}

int Armor::getPrice() {
	return this->price;
}
void Armor::setPrice(int price) {
	this->price = price;
}
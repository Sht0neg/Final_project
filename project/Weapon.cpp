#include <iostream>
#include <string>
#include "Weapon.h"

Weapon::Weapon(std::string name, int damage, int durability, int weight, std::string type, int price) : Entity(name) {
	this->damage = damage;
	this->durability = durability;
	this->weight = weight;
	this->type = type;
	this->price = price;
}

void Weapon::print() {
	std::cout << "Урон: " << this->damage << "; Прочность: " << this->durability << "; Вес: " << this->weight << "; Тип атаки: " << this->type << "; Цена: " << this->price;
}

int Weapon::getDamage() {
	return this->damage;
}
void Weapon::setDamage(int damage) {
	this->damage = damage;
}

int Weapon::getDurability() {
	return this->durability;
}
void Weapon::setDurability(int durability) {
	this->durability = durability;
}

int Weapon::getWeight() {
	return this->durability;
}
void Weapon::setWeight(int weight) {
	this->weight = weight;
}

std::string Weapon::getType() {
	return this->type;
}
void Weapon::setType(std::string type) {
	this->type = type;
}

int Weapon::getPrice() {
	return this->price;
}
void Weapon::setPrice(int price) {
	this->price = price;
}
#include "Item.h"
#include <string>

Item::Item(std::string name, int value, int weight, int price) : Entity(name) {
	if (value > 0) {
		this->value = value;
	}
	else {
		this->value = -1 * value;
	}
	if (weight > 0) {
		this->weight = weight;
	}
	else {
		this->weight = -1 * weight;
	}
	if (price > 0) {
		this->price = price;
	}
	else {
		this->price = -1 * price;
	}
}

int Item::getValue() {
	return this->value;
};
void Item::setValue(int value) {
	if (value > 0) {
		this->value = value;
	}
	else {
		this->value = -1 * value;
	}
};
int Item::getWeight() {
	return this->weight;
};
void Item::setWeight(int weight) {
	if (weight > 0) {
		this->weight = weight;
	}
	else {
		this->weight = -1 * weight;
	}
};
int Item::getPrice() {
	return this->price;
};
void Item::setPrice(int price) {
	if (price > 0) {
		this->price = price;
	}
	else {
		this->price = -1 * price;
	}
};
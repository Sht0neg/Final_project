#pragma once
#include "Entity.h"
#include <string>

class Item : public Entity {
protected:
	int weight;//вес
	int price;
	int value;
	Item(std::string name, int value, int weight, int price);
	Item();
public:
	int getValue();
	void setValue(int value);

	int getWeight();
	void setWeight(int weight);

	int getPrice();
	void setPrice(int price);
};

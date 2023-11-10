#pragma once
#include "Item.h"
#include <string>

class Artifact : public Item {
private:
	std::string type;
public:
	Artifact(std::string name, std::string type, int value, int weight, int price);
	Artifact();
	void print();
	std::string getType();
	void setType(std::string type);
};
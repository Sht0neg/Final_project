#include "Artifact.h"
#include <string>

Artifact::Artifact(std::string name, std::string type, int value, int weight, int price) : Item(name, value, weight, price){
	this->type = type;
};

Artifact::Artifact() {
	this->type = "";
}

std::string Artifact::getType() {
	return this->type;
};

void Artifact::setType(std::string type) {
	this->type = type;
};
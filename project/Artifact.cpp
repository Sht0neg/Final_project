#include "Artifact.h"
#include <string>
#include <iostream>

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

void Artifact::print() {
	std::cout << "\nID: " << this->id << "\n\t��������: " << this->name << "\n\t���: " << this->type << "\n\t�������� ��������� � ���������: " << this->value << "\n\t���: " << this->weight << "\n\t����: " << this->price << std::endl;
};
#include "Entity.h"

int Entity::tempid = 0;

int Entity::getID() {
	return this->id;
};
std::string Entity::getName() {
	return this->name;
};
void Entity::setName(std::string name) {
	this->name = name;
};

Entity::Entity(std::string name)
{
	this->tempid++;
	this->id = tempid;
	this->name = name;
};


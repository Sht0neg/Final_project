#include "Entity.h"

int Entity::tempid = 0;

Entity::Entity(std::string name){	{
	this->tempid++;
	this->id = tempid;
	this->name = name;
}


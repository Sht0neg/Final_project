#pragma once
#include <string>

class Entity {
protected:
	int id;
	std::string name;
public:
	static int tempid;
	Entity(std::string name);
};

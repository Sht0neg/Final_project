#pragma once
#include <string>

class Entity {
protected:
	int id;
	std::string name;
public:
	static int tempid;
	Entity(std::string name);
	int getID();
	std::string getName();
	void setName(std::string name);
};

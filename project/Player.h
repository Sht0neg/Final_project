#pragma once
#include "Character.h"
#include "Weapon.h"
#include <string>
#include "Armor.h"
#include "Artifact.h"
#include "Monster.h"

class Player : public Character {
private:
	int weight;
	int exp;
	Weapon* weapon;
	int intelligence;
	int balance;
	Armor* armor;
	Artifact* artifact;
public:
	Player(std::string name, int hp, int strenght, int agility, int level, int damage, int weight, int exp, Weapon* weapon, int intelligence, int balance, Armor* armor, Artifact* artifact);
	int getWeight();
	void setWeight(int weight);
	int getExp();
	void setExp(int exp);
	Weapon* getWeapon();
	void setWeapon(Weapon* weapon);
	int getIntelligence();
	void setIntelligence(int intelligence);
	int getBalance();
	void setBalance(int balance);
	Armor* getArmor();
	void setArmor(Armor* armor);
	Artifact* getArtifact();
	void setArtifact(Artifact* artifact);
	void fight(Monster* monster, Weapon* sword);
};
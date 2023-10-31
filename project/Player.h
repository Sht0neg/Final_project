#pragma once
#include "Character.h"
#include "Weapon.h"
#include <string>
#include "Armor.h"

class Player : public Character {
private:
	int weight;
	int exp;
	int mana;
	Weapon* weapon;
	int intelligence;
	int stamina;
	int maxstamina;
	int balance;
	Armor* armor;
public:
	Player(std::string name, int hp, int maxhp, int strenght, int agility, int level, int damage, int weight, int exp, int mana, Weapon* weapon, int intelligence, int stamina, int balance, Armor* armor);
	int getWeight();
	void setWeight(int weight);
	int getExp();
	void setExp(int exp);
	int getMana();
	void setMana(int mana);
	Weapon* getWeapon();
	void setWeapon(Weapon* weapon);
	int getIntelligence();
	void setIntelligence(int intelligence);
	int getStamina();
	void setStamina(int stamina);
	int getMaxstamina();
	void setMaxstamina(int maxstamina);
	int getBalance();
	void setBalance(int balance);
	Armor* getArmor();
	void setArmor(Armor* armor);
};
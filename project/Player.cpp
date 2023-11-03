#include "Player.h"
#include <string>

Player::Player(std::string name, int hp, int strenght, int agility, int level, int damage, int weight, int exp, Weapon* weapon, int intelligence, int balance, Armor* armor, Artifact* artifact) : Character(name, hp, strenght, agility, level, damage) {
	if (weight > 0) {
		this->weight = weight;
	}
	else {
		this->weight = -1 * weight;
	}
	if (exp > 0) {
		this->exp = exp;
	}
	else {
		this->exp = -1 * exp;
	}
	if (intelligence > 0) {
		this->intelligence = intelligence;
	}
	else {
		this->intelligence = -1 * intelligence;
	}
	if (balance > 0) {
		this->balance = balance;
	}
	else {
		this->balance = -1 * balance;
	}
	this->weapon = weapon;
	this->armor = armor;
	this->artifact = artifact;
};

int Player::getWeight() {
	return this->weight;
};
void Player::setWeight(int weight) {
	if (weight > 0) {
		this->weight = weight;
	}
	else {
		this->weight = -1 * weight;
	}
};
int Player::getExp() {
	return this->exp;
};
void Player::setExp(int exp) {
	if (exp > 0) {
		this->exp = exp;
	}
	else {
		this->exp = -1 * exp;
	}
};
Weapon* Player::getWeapon() {
	return this->weapon;
};
void Player::setWeapon(Weapon* weapon) {
	this->weapon = weapon;
};
int Player::getIntelligence() {
	return this->intelligence;
};
void Player::setIntelligence(int intelligence) {
	if (intelligence > 0) {
		this->intelligence = intelligence;
	}
	else {
		this->intelligence = -1 * intelligence;
	}
};
int Player::getBalance() {
	return this->balance;
};
void Player::setBalance(int balance) {
	if (balance > 0) {
		this->balance = balance;
	}
	else {
		this->balance = -1 * balance;
	}
};
Armor* Player::getArmor() {
	return this->armor;
};
void Player::setArmor(Armor* armor) {
	this->armor = armor;
};
Artifact* Player::getArtifact() {
	return this->artifact;
}
void Player::setArtifact(Artifact* artifact) {
	this->artifact = artifact;
}
#include "Player.h"
#include <string>

Player::Player(std::string name, int hp, int maxhp, int strenght, int agility, int level, int damage, int weight, int exp, int mana, Weapon* weapon, int intelligence, int stamina, int balance, Armor* armor) : Character(name, hp, maxhp, strenght, agility, level, damage) {
	this->weight = weight;
	this->exp = exp;
	this->mana = mana;
	this->weapon = weapon;
	this->intelligence = intelligence;
	this->stamina = stamina;
	this->maxstamina = stamina;
	this->balance = balance;
	this->armor = armor;
};

int Player::getWeight() {
	return this->weight;
};
void Player::setWeight(int weight) {
	this->weight = weight;
};
int Player::getExp() {
	return this->exp;
};
void Player::setExp(int exp) {
	this->exp = exp;
};
int Player::getMana() {
	return this->mana;
};
void Player::setMana(int mana) {
	this->mana = mana;
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
	this->intelligence = intelligence;
};
int Player::getStamina() {
	return this->stamina;
};
void Player::setStamina(int stamina) {
	this->stamina = stamina;
};
int Player::getMaxstamina() {
	return this->maxstamina;
};
void Player::setMaxstamina(int maxstamina) {
	this->maxstamina = maxstamina;
};
int Player::getBalance() {
	return this->balance;
};
void Player::setBalance(int balance) {
	this->balance = balance;
};
Armor* Player::getArmor() {
	return this->armor;
};
void Player::setArmor(Armor* armor) {
	this->armor = armor;
};
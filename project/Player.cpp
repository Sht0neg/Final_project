#include "Player.h"
#include <string>
#include <iostream>

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

void Player::fight(Monster* monster, Weapon* sword) {
	if (this->weapon->getType() == "HP") {
		this->maxhp += this->maxhp * this->artifact->getValue();
	}
	else if (this->weapon->getType() == "Damage") {
		this->damage += this->damage * this->artifact->getValue();
	}
	int choice;
	std::cout << "Если вы хотите начать сражение, введите 0, если хотите пройти мимо противника введите любое другое число" << std::endl;
	std::cin >> choice;
	if (choice == 0) {
		std::cout << "Ваши характеристики - характеристики монстра\n";
		std::cout << "Ловкость: " << this->agility << " - " << monster->getAgility() << std::endl;
		std::cout << "Урон: " << this->damage << " - " << monster->getDamage() << std::endl;
		std::cout << "Хп: " << this->hp << " - " << monster->getHP() << std::endl;
		std::cout << "Сила: " << this->strenght << " - " << monster->getStrenght() << std::endl;
		int choice_in_fight;
		bool fight_state = true;
		while (fight_state) {
			this->weapon->repair(*this);
			this->armor->repair(*this);
			if (this->weapon->getType() == "Heal") {
				std::cout << "Если вы хотите ударить противника, введите 0, если хотите использовать руну регенерации, введите 2" << std::endl;
			}
			else {
				std::cout << "Для того, чтобы ударить противника, введите 0" << std::endl;
			}
			std::cin >> choice_in_fight;
			switch (choice_in_fight)
			{
			case 0:
				monster->setHP(monster->getHP() - this->damage - this->weapon->getValue());
				std::cout << "Вы нанесли " << this->damage + this->weapon->getValue() << " урона\n";
				break;
			case 2:
				if (this->hp + this->hp * this->artifact->getValue() < this->maxhp) {
					this->hp = this->hp + this->hp * this->artifact->getValue();
				}
				else {
					std::cout << "Невозможно импользовать артефакт\n";
				}
				break;
			}
			std::cout << "Ваши хп: " << this->hp << ", хп монстра: " << monster->getHP() << std::endl;
			if (monster->getWeaponState()) {
				this->hp = this->hp - (monster->getDamage() + monster->getWeapon()->getValue()) / 100 * (100 - this->armor->getValue());
				std::cout << "Удар противника нанёс вам " << (monster->getDamage() + monster->getWeapon()->getValue()) / 100 * (100 - this->armor->getValue()) << " урона\n";
			}
			else {
				this->hp = this->hp - monster->getDamage() / 100 * (100 - this->armor->getValue());
				std::cout << "Удар противника нанёс вам " << monster->getDamage() / 100 * (100 - this->armor->getValue()) << " урона\n";
			}
			std::cout << "Ваши хп: " << this->hp << ", хп монстра: " << monster->getHP() << std::endl;
			if (this->hp < (monster->getDamage() + monster->getWeapon()->getValue()) / 100 * (100 - this->armor->getValue())) {
				std::cout << "Вы погибли, ваша броня, оружие и артефакт были утеряны, однако было возвращено 50% их стоимости\n";
				this->weapon = sword;
				this->armor = new Armor();
				this->artifact = new Artifact();
				this->balance += this->armor->getPrice() / 2 + this->armor->getPrice() / 2 + this->artifact->getPrice() / 2;
				this->hp = maxhp;
				fight_state = false;
			}
			else if (monster->getHP() < this->damage + this->weapon->getValue()) {
				std::cout << "Вы победили, вам было начислено: " << monster->getExp() << " опыта\n";
				this->exp += monster->getExp();
				this->level = this->exp / 10;
				fight_state = false;
			}
			if (this->weapon->getType() == "HP") {
				this->maxhp -= this->maxhp * this->artifact->getValue();
			}
			else if (this->weapon->getType() == "Damage") {
				this->damage -= this->damage * this->artifact->getValue();
			}
		}
	}
}
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
	std::cout << "���� �� ������ ������ ��������, ������� 0, ���� ������ ������ ���� ���������� ������� ����� ������ �����" << std::endl;
	std::cin >> choice;
	if (choice == 0) {
		std::cout << "���� �������������� - �������������� �������\n";
		std::cout << "��������: " << this->agility << " - " << monster->getAgility() << std::endl;
		std::cout << "����: " << this->damage << " - " << monster->getDamage() << std::endl;
		std::cout << "��: " << this->hp << " - " << monster->getHP() << std::endl;
		std::cout << "����: " << this->strenght << " - " << monster->getStrenght() << std::endl;
		int choice_in_fight;
		bool fight_state = true;
		while (fight_state) {
			this->weapon->repair(*this);
			this->armor->repair(*this);
			if (this->weapon->getType() == "Heal") {
				std::cout << "���� �� ������ ������� ����������, ������� 0, ���� ������ ������������ ���� �����������, ������� 2" << std::endl;
			}
			else {
				std::cout << "��� ����, ����� ������� ����������, ������� 0" << std::endl;
			}
			std::cin >> choice_in_fight;
			switch (choice_in_fight)
			{
			case 0:
				monster->setHP(monster->getHP() - this->damage - this->weapon->getValue());
				std::cout << "�� ������� " << this->damage + this->weapon->getValue() << " �����\n";
				break;
			case 2:
				if (this->hp + this->hp * this->artifact->getValue() < this->maxhp) {
					this->hp = this->hp + this->hp * this->artifact->getValue();
				}
				else {
					std::cout << "���������� ������������ ��������\n";
				}
				break;
			}
			std::cout << "���� ��: " << this->hp << ", �� �������: " << monster->getHP() << std::endl;
			if (monster->getWeaponState()) {
				this->hp = this->hp - (monster->getDamage() + monster->getWeapon()->getValue()) / 100 * (100 - this->armor->getValue());
				std::cout << "���� ���������� ���� ��� " << (monster->getDamage() + monster->getWeapon()->getValue()) / 100 * (100 - this->armor->getValue()) << " �����\n";
			}
			else {
				this->hp = this->hp - monster->getDamage() / 100 * (100 - this->armor->getValue());
				std::cout << "���� ���������� ���� ��� " << monster->getDamage() / 100 * (100 - this->armor->getValue()) << " �����\n";
			}
			std::cout << "���� ��: " << this->hp << ", �� �������: " << monster->getHP() << std::endl;
			if (this->hp < (monster->getDamage() + monster->getWeapon()->getValue()) / 100 * (100 - this->armor->getValue())) {
				std::cout << "�� �������, ���� �����, ������ � �������� ���� �������, ������ ���� ���������� 50% �� ���������\n";
				this->weapon = sword;
				this->armor = new Armor();
				this->artifact = new Artifact();
				this->balance += this->armor->getPrice() / 2 + this->armor->getPrice() / 2 + this->artifact->getPrice() / 2;
				this->hp = maxhp;
				fight_state = false;
			}
			else if (monster->getHP() < this->damage + this->weapon->getValue()) {
				std::cout << "�� ��������, ��� ���� ���������: " << monster->getExp() << " �����\n";
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
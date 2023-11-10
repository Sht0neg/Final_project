#include <iostream>
#include <string>
#include "Armor.h"

Armor::Armor(std::string name, int value, int durability, int weight, int price) : Item(name, value, weight, price) {
	if (durability > 0) {
		this->durability = durability;
		this->maxdurability = durability;
	}
	else {
		this->durability = -1 * durability;
		this->maxdurability = -1 * durability;
	}
}

Armor::Armor(){
	this->durability = 0;
}

void Armor::print() {
	std::cout << "\nID: " << this->id << "\n\t��������: " << this->name << "\n\t������� ���������� �����: " << this->value << "\n\t���������: " << this->durability << " / " << this->maxdurability << "\n\t���: " << this->weight << "\n\t����: " << this->price << std::endl;
}

int Armor::getDurability() {
	return this->durability;
}
void Armor::setDurability(int durability) {
	if (durability > 0) {
		this->durability = durability;
	}
	else {
		this->durability = -1 * durability;
	}
}

int Armor::getMaxDurability() {
	return this->maxdurability;
};
void Armor::setMaxDurability(int maxdurability) {
	if (durability > 0) {
		this->maxdurability = durability;
	}
	else {
		this->maxdurability = -1 * durability;
	}
};

void Armor::repair(Player* player) {
	if (this->durability < this->maxdurability) {
		int change;
		std::cout << "�� ������ �������� �����, 2 ������� ��������� = 1 ������, ���� ������ ��� ������� ������� 1, ���� �� ������, ������� ����� ������ �����\n";
		std::cout << "� ������ ���������� ���������� ����� 0, ��� �� ����� ������ ������� � ������\n";
		std::cin >> change;
		if (change == 1) {
			int maxdurab = this->maxdurability - this->durability;
			if (player->getBalance() >= maxdurab / 2) {
				this->durability += maxdurab;
				player->setBalance(player->getBalance() - maxdurab / 2);
			}
			else {
				int durab = player->getBalance() * 2;
				this->durability += durab;
				player->setBalance(0);
			}
			std::cout << "��� ������: " << player->getBalance() << std::endl;
			std::cout << "��������� �����: " << this->durability << " / " << this->maxdurability << std::endl;
		}
	}
}
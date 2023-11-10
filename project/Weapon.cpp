#include <iostream>
#include <string>
#include "Weapon.h"
#include "Player.h"

Weapon::Weapon(std::string name, int value, int durability, int weight, std::string type, int price) : Item(name, value, weight, price) {
	if (durability > 0) {
		this->durability = durability;
		this->maxdurability = durability;
	}
	else {
		this->durability = -1 * durability;
		this->maxdurability = -1 * durability;
	}
	this->type = type;
}

Weapon::Weapon() {
	this->durability = 0;
	this->maxdurability = 0;
	this->type = "";
}

void Weapon::print() {
	std::cout << "\nID: " << this->id << "\n\tНазвание: " << this->name << "\n\tУрон: " << this->value << "\n\tПрочность: " << this->durability << " / " << this->maxdurability << "\n\tВес: " << this->weight << "\n\tТип атаки: " << this->type << "\n\tЦена: " << this->price << std::endl;
}


int  Weapon::getDurability() {
	return this->durability;
}
void  Weapon::setDurability(int durability) {
	if (durability > 0) {
		this->durability = durability;
	}
	else {
		this->durability = -1 * durability;
	}
}

int  Weapon::getMaxDurability() {
	return this->maxdurability;
};
void  Weapon::setMaxDurability(int maxdurability) {
	if (durability > 0) {
		this->maxdurability = durability;
	}
	else {
		this->maxdurability = -1 * durability;
	}
};

std::string Weapon::getType() {
	return this->type;
};
void Weapon::setType(std::string type) {
	this->type = type;
};

void Weapon::repair(Player* player) {
	if (this->durability < this->maxdurability) {
		int change;
		if (this->durability == 0) {
			std::cout << "Для продолжения битвы вам придётся починить оружие, 2 единица прочности = 1 монета\n";
			change = 1;
		}
		else {
			std::cout << "Вы можете починить оружие, 2 единица прочности = 1 монета, если хотите это сделать введите 1, если не хотите, введите любое другое число\n";
		}
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
			std::cout << "Ваш баланс: " << player->getBalance() << std::endl;
			std::cout << "Прочность оружия: " << this->durability << " / " << this->maxdurability << std::endl;
		}
	}
}

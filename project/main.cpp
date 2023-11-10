#include <iostream>
#include <string>
#include "Armor.h"
#include "Artifact.h"
#include "Monster.h"
#include "Weapon.h"
#include "Player.h"

void buy_sale_weapon(Player* player);
void buy_sale_artifact(Player* player);
void buy_sale_armor(Player* player);

Weapon* sword1 = new Weapon("Железный меч", 12, 80, 1000, "Ближний бой", 70);

Weapon* sword2 = new Weapon("Катаны дайто", 50, 65, 800, "Ближний бой", 90);

Weapon* sword3 = new Weapon("Рапира", 70, 200, 1300, "Ближний бой", 130);

Weapon* sword4 = new Weapon("Меч дракона", 200, 1300, 1200, "Ближний бой", 1000);

Weapon* bow1 = new Weapon("Лук", 17, 70, 700, "Дальний бой", 80);

Weapon* bow2 = new Weapon("Арбалет", 32, 130, 1200, "Дальний бой", 95);



Artifact* artifact1 = new Artifact("Руна регенерации", "Heal", 5, 20, 250);

Artifact* artifact2 = new Artifact("Руна здоровья", "HP", 3, 30, 75);

Artifact* artifact3 = new Artifact("Руна силы", "Damage", 30, 40, 90);



Armor* armor1 = new Armor("Броня О-ёрой", 20, 200, 2000, 100);

Armor* armor2 = new Armor("Броня самурая", 40, 340, 2400, 180);

Armor* armor3 = new Armor("Броня короля драконов", 60, 500, 3000, 400);



Monster* monster1 = new Monster("Гоблин", 50, 3, 3, 1, 7, 2);

Monster* monster2 = new Monster("Кентавр", 75, 6, 4, 2, 10, 3);

Monster* monster3 = new Monster("Разбойник", 55, 4, 6, 3, 0, bow2, 4);

Monster* monster4 = new Monster("Колдун", 60, 4, 4, 4, 14, 5);

Monster* monster5 = new Monster("Фантом", 65, 5, 14, 5, 20, 7);

Monster* monster6 = new Monster("Виверна", 110, 10, 12, 6, 25, 8);

Monster* monster7 = new Monster("Дракон", 200, 23, 30, 7, 30, 25);

using namespace std;
int main()
{


}

void buy_sale_weapon(Player* player) {
	int a;
	cout << "Купить оружие - 1, продать оружие - 2: ";
	cin >> a;
	cout << "Ваш баланс: " << player->getBalance();
	if (a == 1) {
		int n;
		cout << "Оружия, которые можно купить:";
		sword2->print();
		sword3->print();
		bow1->print();
		cout << "Введите ID оружия: ";
		cin >> n;
		if (n == sword2->getID()) {
			if (player->getBalance() >= sword2->getPrice()) {
				player->setBalance(player->getBalance() - sword2->getPrice());
				player->setWeapon(sword2);
				cout << "Ваш баланс: " << player->getBalance();
			}
			else {
				cout << "У вас недостаточно денег!";
			}
		}
		else if (n == sword3->getID()) {
			if (player->getBalance() >= sword3->getPrice()) {
				player->setBalance(player->getBalance() - sword3->getPrice());
				player->setWeapon(sword3);
				cout << "Ваш баланс: " << player->getBalance();
			}
			else {
				cout << "У вас недостаточно денег!";
			}
		}
		else if (n == bow1->getID()) {
			if (player->getBalance() >= bow1->getPrice()) {
				player->setBalance(player->getBalance() - bow1->getPrice());
				player->setWeapon(bow1);
				cout << "Ваш баланс: " << player->getBalance();
			}
			else {
				cout << "У вас недостаточно денег!";
			}
		}
		else {
			cout << "ID указан неверно!";
		}

		if (a == 2) {
			int n;
			cout << "Оружия, которые можно продать:";
			sword2->print();
			sword3->print();
			bow1->print();
			cout << "Введите ID оружия: ";
			cin >> n;
			if (n == sword1->getID() && player->getWeapon()->getID() == sword1->getID()) {
				player->setBalance(player->getBalance() + sword1->getPrice() * 0.9);
				cout << "Ваш баланс: " << player->getBalance();
				player->setWeapon(new Weapon());
			}
			else if (n == sword2->getID() && player->getWeapon()->getID() == sword2->getID()) {
				player->setBalance(player->getBalance() + sword2->getPrice() * 0.9);
				cout << "Ваш баланс: " << player->getBalance();
				player->setWeapon(new Weapon());
			}
			else if (n == sword3->getID() && player->getWeapon()->getID() == sword3->getID()) {
				player->setBalance(player->getBalance() + sword3->getPrice() * 0.9);
				cout << "Ваш баланс: " << player->getBalance();
				player->setWeapon(new Weapon());
			}
			else if (n == sword4->getID() && player->getWeapon()->getID() == sword4->getID()) {
				player->setBalance(player->getBalance() + sword4->getPrice() * 0.9);
				cout << "Ваш баланс: " << player->getBalance();
				player->setWeapon(new Weapon());
			}
			else if (n == bow1->getID() && player->getWeapon()->getID() == bow1->getID()) {
				player->setBalance(player->getBalance() + bow1->getPrice() * 0.9);
				cout << "Ваш баланс: " << player->getBalance();
				player->setWeapon(new Weapon());
			}
			else if (n == bow2->getID() && player->getWeapon()->getID() == bow1->getID()) {
				player->setBalance(player->getBalance() + bow2->getPrice() * 0.9);
				cout << "Ваш баланс: " << player->getBalance();
				player->setWeapon(new Weapon());
			}
			else {
				cout << "ID указан неверно!";
			}
		}
	}
}

void buy_sale_artifact(Player* player) {
	int a;
	cout << "Купить руны - 1, продать руны - 2: ";
	cin >> a;
	cout << "Ваш баланс: " << player->getBalance();
	if (a == 1) {
		int n;
		cout << "Руны, которые можно купить:";
		artifact1->print();
		artifact2->print();
		artifact3->print();
		cout << "Введите ID руны: ";
		cin >> n;
		if (n == artifact1->getID()) {
			if (player->getBalance() >= artifact1->getPrice()) {
				player->setBalance(player->getBalance() - artifact1->getPrice());
				player->setArtifact(artifact1);
				cout << "Ваш баланс: " << player->getBalance();
			}
			else {
				cout << "У вас недостаточно денег!";
			}
		}
		else if (n == artifact2->getID()) {
			if (player->getBalance() >= artifact2->getPrice()) {
				player->setBalance(player->getBalance() - artifact2->getPrice());
				cout << "Ваш баланс: " << player->getBalance();
				player->setArtifact(artifact2);
			}
			else {
				cout << "У вас недостаточно денег!";
			}
		}
		else if (n == artifact3->getID()) {
			if (player->getBalance() >= artifact3->getPrice()) {
				player->setBalance(player->getBalance() - artifact3->getPrice());
				cout << "Ваш баланс: " << player->getBalance();
				player->setArtifact(artifact3);
			}
			else {
				cout << "У вас недостаточно денег!";
			}
		}
		else {
			cout << "ID указан неверно!";
		}

		if (a == 2) {
			int n;
			cout << "Руны, которые можно продать:";
			artifact1->print();
			artifact2->print();
			artifact3->print();
			cout << "Введите ID руны: ";
			cin >> n;
			if (n == artifact1->getID() && player->getArtifact()->getID() == artifact1->getID()) {
				player->setBalance(player->getBalance() + artifact1->getPrice() * 0.9);
				cout << "Ваш баланс: " << player->getBalance();
				player->setArtifact(new Artifact());

			}
			else if (n == artifact2->getID() && player->getArtifact()->getID() == artifact2->getID()) {
				player->setBalance(player->getBalance() + artifact2->getPrice() * 0.9);
				cout << "Ваш баланс: " << player->getBalance();
				player->setArtifact(new Artifact());
			}
			else if (n == artifact3->getID() && player->getArtifact()->getID() == artifact3->getID()) {
				player->setBalance(player->getBalance() + artifact3->getPrice() * 0.9);
				cout << "Ваш баланс: " << player->getBalance();
				player->setArtifact(new Artifact());
			}
			else {
				cout << "ID указан неверно!";
			}
		}
	}
}

void buy_sale_armor(Player* player) {
	int a;
	cout << "Купить броню - 1, продать броню - 2: ";
	cin >> a;
	cout << "Ваш баланс: " << player->getBalance();
	if (a == 1) {
		int n;
		cout << "Броня, которую можно купить:";
		armor1->print();
		armor2->print();
		cout << "Введите ID брони: ";
		cin >> n;
		if (n == armor1->getID()) {
			if (player->getBalance() >= armor1->getPrice()) {
				player->setBalance(player->getBalance() - armor1->getPrice());
				player->setArmor(armor1);
				cout << "Ваш баланс: " << player->getBalance();
			}
			else {
				cout << "У вас недостаточно денег!";
			}
		}
		else if (n == armor2->getID()) {
			if (player->getBalance() >= armor2->getPrice()) {
				player->setBalance(player->getBalance() - armor2->getPrice());
				cout << "Ваш баланс: " << player->getBalance();
				player->setArmor(armor2);
			}
			else {
				cout << "У вас недостаточно денег!";
			}
		}
		else {
			cout << "ID указан неверно!";
		}
		if (a == 2) {
			int n;
			cout << "Броня, которую можно продать:";
			armor1->print();
			armor2->print();
			armor3->print();
			cout << "Введите ID брони: ";
			cin >> n;
			if (n == armor1->getID() && player->getArmor()->getID() == armor1->getID()) {
				player->setBalance(player->getBalance() + armor1->getPrice() * 0.9);
				cout << "Ваш баланс: " << player->getBalance();
				player->setArmor(new Armor());
			}
			else if (n == armor2->getID() && player->getArmor()->getID() == armor2->getID()) {
				player->setBalance(player->getBalance() + armor2->getPrice() * 0.9);
				cout << "Ваш баланс: " << player->getBalance();
				player->setArmor(new Armor());
			}
			else if (n == armor3->getID() && player->getArmor()->getID() == armor3->getID()) {
				player->setBalance(player->getBalance() + armor3->getPrice() * 0.9);
				cout << "Ваш баланс: " << player->getBalance();
				player->setArmor(new Armor());
			}
			else {
				cout << "ID указан неверно!";
			}
		}
	}
}



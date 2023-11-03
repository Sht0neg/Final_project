#include <iostream>
#include <string>
#include "Armor.h"
#include "Artifact.h"
#include "Monster.h"
#include "Weapon.h"
#include "Player.h"


using namespace std;
int main()
{
	Weapon* sword1 = new Weapon("Железный меч", 12, 80, 1000, "Ближний бой", 70);

	Weapon* sword2 = new Weapon("Катаны дайто", 50, 65, 800, "Ближний бой", 90);

	Weapon* sword3 = new Weapon("Рапира", 70, 200, 1300, "Ближний бой", 130);

	Weapon* bow1 = new Weapon("Лук", 17, 70, 700, "Дальний бой", 80);

	Weapon* bow2 = new Weapon("Арбалет", 32, 130, 1200, "Дальний бой", 95);

	Weapon* sword2 = new Weapon("Меч дракона", 200, 1300, 1200, "Ближний бой", 1000);

	Artifact* artifact1 = new Artifact("Руна регенерации", "Востановление здоровья", 5, 20, 15);

	Artifact* artifact2 = new Artifact("Руна здоровья", "Увеличивает макс. здоровье", 3, 30, 25);

	Artifact* artifact3 = new Artifact("Руна силы", "Увелечение урона", 30, 40, 40);

	Armor* armor1 = new Armor("Броня О-ёрой", 20, 200, 2000, 100);

	Armor* armor2 = new Armor("Броня самурая", 40, 340, 2400, 180);

	Armor* armor3 = new Armor("Броня короля драконов", 60, 500, 3000, 400);


}



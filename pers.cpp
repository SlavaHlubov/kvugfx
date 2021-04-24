#include <ctime>
#include <cstdlib>
#include "pers.h"
#include <iostream>
int getDamage(const Knight& k1, int a)
{
	srand(time(0)+a);
	float random_add = (rand() % 51 - 25)/100.0;
	float damage = k1.damage * (1 + random_add);
	return int (damage);
}

void attack(Knight& k1, Knight& k2,int a)
{
	k2.hp = k2.hp - getDamage(k1,a);
}
bool isDead(const Knight& k1)
{
	return k1.hp <= 0;
}
void print(const Knight& k1)
{
	std::cout << k1.name << " has " << k1.hp << " hp\n";
}
#include <iostream>
#include "pers.h"
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	Knight artur ("Artur\0", 1000, 100, 50, 10);
	Knight fred("Artur\0", 1000, 120, 40, 15);
	print(artur);
	print(fred);
	while (true)
	{
		attack(artur, fred,5);
		if (isDead(fred)) break;
		attack(fred, artur,13);
		if (isDead(artur)) break;
		print(artur);
		print(fred);
		std::cout << "Press any key to continue\n";
		_getch();
	}
	if (isDead(artur)) std::cout << "Fred wins\n";
	if (isDead(fred)) std::cout << "Artur wins\n";
}
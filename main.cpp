#include <iostream>
#include "general.h"
#define PAUSE system("pause");

int main() {
	Animal* dubby = new Animal();
	initAnimal(*dubby);
	printAnimal(*dubby);
	delete dubby;
	PAUSE
	return 0;
}
#include <iostream>
#include "general.h"

typedef void(*ANIMAL_FACADE)(Animal&);

const char* sexToString[] = { "male", "female" };
const char* typeToString[] = { "dog", "cat", "mouse", "rabbit", "monkey", "snake" };
const char* treatment[] = { "his", "her", "it's" };
const char* haveHostToString[] = { "no", "yes" };

ANIMAL_FACADE animalFacade[] = {
	defineType,
	defineSex,
	addName,
	defineAge,
	doHaveHost
};

void printAnimal(Animal &animal) {
	printDivLine();
	printf("TYPE: %s\nNAME: %s\nSEX : %s\nAGE : %d\nHOST: %s\n",
		typeToString[animal.type], 
		animal.name, 
		sexToString[animal.sex], 
		animal.age, 
		haveHostToString[animal.haveHost]);
	printDivLine();
}

void initAnimal(Animal &animal) {
	unsigned int size = sizeof(animalFacade)/sizeof(animalFacade[0]);
	for (int i = 0; i < size; i++) {
		animalFacade[i](animal);
	}
}

void defineType(Animal &animal) {
	printf("Who is it?\n");
	for (int i = 0; i < getSizeOf(TYPE_ARRAY); i++) {
		printf("[%d] - %s\n", (i + 1), (typeToString[i]));
	}
	int choise = 0;
	printUserInvitation("defineType");
	scanf("%d", &choise);
	fflush(stdin);
	animal.type = static_cast<AnimalType>(choise-1);
}

void defineSex(Animal &animal) {
	
	printf("It's girl or boy? [M/F]\n");
	printUserInvitation("defineSex");
	char choise;
	scanf("%c", &choise);
	fflush(stdin);
	if (booleanChoise(choise)) {
		animal.sex = MALE;
	}
	else {
		animal.sex = FEMALE;
	}
}

void addName(Animal &animal) {
	char name[NAME_SIZE];
	printf("What's %s name?\n", treatment[animal.sex]);
	printUserInvitation("addName");
	scanf("%s", &name);
	strcpy_s(animal.name, NAME_SIZE, name);
	fflush(stdin);
}

void defineAge(Animal &animal) {
	printf("How old is %s?\n", animal.name);
	while (true) {
		printUserInvitation("defineAge");
		int age = 0;
		scanf("%d", &age);
		fflush(stdin);
		if (age < 0) {
			printf("Wrong entry: age couldn't be negative!\n");
		}
		else {
			animal.age = age;
			break;
		}
	}
}

void doHaveHost(Animal &animal) {
	printf("Do %s have host? [y/n]\n", animal.name);
	printUserInvitation("doHaveHost");
	char choise;
	scanf("%c", &choise);
	animal.haveHost = booleanChoise(choise);
}

//GETTERS
int getSizeOf(DefStrings def) {
	if (def == SEX_ARRAY) {
		return sizeof(sexToString) / sizeof(sexToString[0]);
	}
	else {
		return sizeof(typeToString) / sizeof(typeToString[0]);
	}
}

int getTreatmentIndex(Animal &animal) {
	if (animal.sex == MALE) {
		return 0;
	}
	else if (animal.sex == FEMALE) {
		return 1;
	}
	else {
		return 2;
	}
}


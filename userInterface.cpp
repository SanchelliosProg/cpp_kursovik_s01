#include "general.h"
#include <iostream>

void printDivLine() {
	printf("---------------------------------------------\n");
}

void printUserInvitation() {
	printf("user:> ");
}

void printUserInvitation(char* action) {
	printf("user/%s:> ", action);
}

bool booleanChoise(char choise) {
	switch (choise) {
	case 'Y':
	case 'y':
	case 'M':
	case 'm':
		return true;
	case 'N':
	case 'n':
	case 'F':
	case 'f':
		return false;
	default:
		printf("Unknown operation, skipping...");
		return false;
	}
}
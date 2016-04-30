#include <iostream>
#include "general.h"

#define PAUSE system("pause");

const char* PRINT = "print";
const char* ADD = "add";
const char* DEFAULT = "dft";
const char* BRIEF_LIST = "brief";
const char* REMOVE = "take";
const char* HELP = "help";
const char* SORT = "sort";
const char* COUNT_MALES = "cntm";
const char* COUNT_FEMALES = "cntf";
const char* QUIT = "quit";
const char* SAVE = "save";
const char* LOAD = "load";
const char* FLUSH = "flush";


void shelterCmd(Shelter &shelter);

int main() {
	Shelter shelter;
	initShelter(shelter);
	help();
	shelterCmd(shelter);
	PAUSE
	return 0;
}

void shelterCmd(Shelter &shelter) {
	while (true) {
		char entry[10] = {0};
		printUserInvitation();
		scanf("%s", entry);
		fflush(stdin);
		if (strcmp(PRINT, entry) == 0) {
			printShelterMembersInfo(shelter);
		}
		else if (strcmp(BRIEF_LIST, entry) == 0) {
			printMembersInBriefList(shelter);
		}
		else if (strcmp(ADD, entry) == 0) {
			addAnimal(shelter);
		}
		else if (strcmp(DEFAULT, entry) == 0) {
			addDefaultShelter(shelter);
		}
		else if (strcmp(REMOVE, entry) == 0) {
			removeAnimal(shelter);
		}
		else if (strcmp(HELP, entry) == 0) {
			help();
		}
		else if (strcmp(SORT, entry) == 0) {
			sortChoise(shelter);
		}
		else if (strcmp(COUNT_MALES, entry) == 0){
			printMalesCount(shelter);
		}
		else if (strcmp(COUNT_FEMALES, entry) == 0){
			printFemalesCount(shelter);
		}
		else if (strcmp(SAVE, entry) == 0) {
			saveToFile(shelter);
		}
		else if (strcmp(SAVE, entry) == 0) {
			saveToFile(shelter);
		}
		else if (strcmp(FLUSH, entry) == 0) {
			flushFile();
		}
		else if (strcmp(LOAD, entry) == 0) {
			loadFromFile(shelter);
		}
		else if (strcmp(QUIT, entry) == 0) {
			break;
		}
		
		else {
			puts("ERROR: UNKNOWN COMMAND");
		}
	}
}


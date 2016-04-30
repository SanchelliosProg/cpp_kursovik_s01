#include <iostream>

void printDivLine() {
	printf("-------------------------------------------------------\n");
}

void help() {
	using namespace std;
	cout
		<< "-------------------------------------------------------" << endl
		<< "HELP: commands to interact with application \"Shelter\"" << endl
		<< "-------------------------------------------------------" << endl
		<< "[print] - to print all members of shelter;" << endl
		<< "[brief] - to print brief list of shelter members" << endl
		<< "[sort]  - to sort animals list" << endl
		<< "[add]	- to register animal in shelter;" << endl
		<< "[take]  - to take animal home;" << endl
		<< "[dft]   - to get default shelter;" << endl
		<< "[help]  - to call help;" << endl
		<< "[cntm]  - count boys;" << endl
		<< "[cntf]  - count girls;" << endl
		<< "[save]  - save to file;" << endl
		<< "[load]  - load from file;" << endl
		<< "[quit]  - to exit;"<<endl
		<< "-------------------------------------------------------"<<endl;
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

void printFileError() {
	puts("ERROR: Couldn't open the file!\n");
}

void fileIsEmptyMessage() {
	puts("ERROR: File is empty!\n");
}
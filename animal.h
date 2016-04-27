enum DefStrings {
	SEX_ARRAY,
	TYPE_ARRAY
};

enum Sex {
	MALE,
	FEMALE
};

enum AnimalType {
	DOG,
	CAT,
	MOUSE,
	RABBIT,
	MONKEY,
	SNAKE
};

const int NAME_SIZE = 15;

struct Animal {
	AnimalType type;
	char name[NAME_SIZE];
	Sex sex;
	int age;
	bool haveHost;
};

void printAnimal(Animal &animal);
void initAnimal(Animal &animal);
void defineType(Animal &animal);
void defineSex(Animal &animal);
void addName(Animal &animal);
void defineAge(Animal &animal);
void doHaveHost(Animal &animal);
int getSizeOf(DefStrings def);
int getTreatmentIndex(Animal &animal);
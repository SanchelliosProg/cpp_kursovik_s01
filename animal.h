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
void printBriefInfo(Animal &animal, int index);
void initAnimal(Animal &animal);
void defineType(Animal &animal);
void defineSex(Animal &animal);
void addName(Animal &animal);
void defineAge(Animal &animal);
void doHaveHost(Animal &animal);
int getSizeOf(DefStrings def);
int getTreatmentIndex(Animal &animal);
Sex getSex(const Animal& animal);
void animalRemovementInfo(Animal &animal);
float compareTypes(const Animal &first, const Animal &second);
float compareGenders(const Animal &first, const Animal &second);
float compareNames(const Animal &first, const Animal &second);
float compareAges(const Animal &first, const Animal &second);
float compareHostStatus(const Animal &first, const Animal &second);

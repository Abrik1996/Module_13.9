#include "People.h"
#include <ctime>
#include <cstdlib>
using std::rand;
using std::srand;
using std::time;
using std::cout;
using std::cin;


const int NAME = 10;         // количество имен в массиве
const char* names[::NAME] = { "Alex", "Pavel", "Daria", "Nic", "Olga",
								"Juri", "Semeon", "Artem", "Peter", "Helena" };
int getRandomNumber()
{
	return rand() % ::NAME;
}
void main()
{
	People* A = new People();
	setlocale(0, "");
	srand(static_cast<unsigned int>(time(NULL)));
	std::string tmp;
	for (int i = 0; i < 20; i++)
	{
	tmp = names[getRandomNumber()];
	A->add_man(tmp);
	}
	A->show();
	cout << "\n\n";
	for (Man n : A->people)
		tmp = n.name;
	cout << "\nname is : " << tmp;
	A->friendship_3(tmp);
	return;
}
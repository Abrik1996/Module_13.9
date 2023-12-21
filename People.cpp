#include "People.h"

void People::add_relations(Man& man)
{

		for (Man& n : people)
		{
			if ((rand() % 2) * (rand() % 2) * (rand() % 2) && (n.name != man.name))
			{
				n.add_friend(man);
				man.add_friend(n);
			}
		}

}
void People::add_man(std::string& tmp)
{
	int k = rand() % 15;
	tmp += " ";
	tmp += static_cast<char>(k);
	;		people.push_back(Man(tmp));
	add_relations(people.back());
}
void People::show()
{
	for (Man n : people)
	{
		std::cout << "\n\nName is :" << n.name;
		n.show_friends();
	}
}

void People::friendship_3(const std::string targetname)
{
	std::string* arr = new std::string[people.size()];
	int k = 0;
	bool check = true;
	std::list<Man>target;
	for (Man n : people)
		if (n.name == targetname)
		{
			target.push_back(n);
		}

	for (Man n : target)
		for (Man n1 : n.friends)
			target.push_back(n1);

	for (Man n : target)
		for (Man n1 : n.friends)
			target.push_back(n1);

	for (Man n : target)
		for (Man n1 : n.friends)
			target.push_back(n1);

	std::cout << "\n\nfriends by 3 : \n";
	for (Man m : target)
	{
		check = true;
		for (int i = 0; i < people.size(); i++)
			if (m.name == arr[i]) check = false;
		if (check) { arr[k] = m.name; k++; }
	}
	for (int i = 0; i < people.size(); i++)
		std::cout << " " << arr[i];
	return;
}

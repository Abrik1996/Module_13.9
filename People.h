#pragma once
#include "Man.h"
class People
{
public:
	std::list<Man> people;
	void add_relations(Man& man);
	void add_man(std::string& tmp);
	void show();
	void friendship_3(const std::string targetname); //собираем список из всех рукопожатий через 3 , далее делаем массив строк с уникальными значениями
};


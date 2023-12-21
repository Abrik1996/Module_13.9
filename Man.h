#pragma once
#include <iostream>
#include <list>
class Man
{
public:
	std::list<Man> friends;
	std::string name;
	void add_friend(Man newfriend);
	void show_friends();
	Man(const std::string s) { name = s; add_friend(*this); }
	
};


#pragma once
#include "Man.h"
class People
{
public:
	std::list<Man> people;
	void add_relations(Man& man);
	void add_man(std::string& tmp);
	void show();
	void friendship_3(const std::string targetname); //�������� ������ �� ���� ����������� ����� 3 , ����� ������ ������ ����� � ����������� ����������
};


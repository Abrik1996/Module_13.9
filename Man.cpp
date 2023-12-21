#include "Man.h"

void Man::add_friend(Man newfriend)
{
	friends.push_back(newfriend);
}

void Man::show_friends()
{
	std::cout << std::endl << "friends (including self):\n";
	for (Man n : friends)
		std::cout << "\t" << n.name;
}

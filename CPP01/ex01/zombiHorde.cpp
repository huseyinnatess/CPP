#include "Zombie.hpp"


Zombie* zombieHorde(int N, std::string name)
{
	Zombie* zombieArray = new Zombie[N];
	
	for (size_t i = 0; i < N; i++)
	{
		zombieArray[i].setName(name);
	}
	return zombieArray;
}
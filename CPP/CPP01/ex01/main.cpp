#include "Zombie.hpp"


int main()
{
	Zombie* array;

	array = zombieHorde(5, "Huseyin");

	for (size_t i = 0; i < 5; i++)
	{
		array[i].announce();
	}

	delete[] array;
}
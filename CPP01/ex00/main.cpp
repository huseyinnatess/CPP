#include "Zombie.hpp"


int main()
{
	Zombie* newZombie = new Zombie("Huseyin");

	newZombie->announce();

	delete newZombie;
}
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();


	Weapon weapon2 = Weapon("Sopa");
	HumanB jim("Jim");
	jim.setWeapon(weapon2);
	jim.attack();
	weapon2.setType("gurz");
	jim.attack();

	return 0;
}

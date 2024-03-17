#ifndef HUMANB
#define HUMANB

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon* weapon;
public:
	HumanB();
	HumanB(std::string name);
	void    setWeapon(Weapon& weapon);
	void    attack();
};

#endif
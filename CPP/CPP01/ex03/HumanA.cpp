#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
	this->_name = name;
}

void    HumanA::attack()
{
	std::cout << this->_name << " " << this->weapon.getType() << " ile saldirdi" << std::endl;
}
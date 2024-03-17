#include "HumanB.hpp"

HumanB::HumanB()
{
	this->name = "defualt";
	this->weapon = NULL;
};

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
};

void    HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}
void    HumanB::attack()
{
	if (this -> weapon)
		std::cout << this->name << " " << this->weapon->getType() << " ile saldirdi" << std::endl;
	else
		std::cout << this->name << " saldiramiyor silahi yok" << std::endl;
}
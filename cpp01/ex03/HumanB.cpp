# include "HumanB.hpp"

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weaponB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weaponB)
{
	this->weaponB = &weaponB;
}

HumanB::HumanB(std::string const &name1): name(name1)/*, weaponB(NULL)*/{}
// {
// 	this->name = name1;
// }
# include "HumanA.hpp"
# include "Weapon.hpp"
# include "HumanB.hpp"

void Weapon::setType(std::string type)
{
	this->type = type;
}

std::string const Weapon::getType(void) const
{
	return (this->type);
}

Weapon::Weapon(std::string const &type1):type(type1) {}
// {
// 	this->type = type1;
// }
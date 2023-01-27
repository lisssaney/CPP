# include "HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weaponA.getType() << std::endl;
}

HumanA::HumanA(std::string const &name1, Weapon const &weapon1) : name(name1), weaponA(weapon1){} // оператор присваивания
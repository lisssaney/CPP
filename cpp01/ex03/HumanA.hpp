#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <iostream>
#include <string>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon const &weaponA;
	public:
		void attack(void);
		HumanA(std::string const &name1, Weapon const &weapon1);
		//void attack()
};
#endif
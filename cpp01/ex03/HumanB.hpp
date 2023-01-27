#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
#include <string>
# include "Weapon.hpp"

class HumanB
{
		private:
			std::string name;
			Weapon *weaponB;
		public:
		void attack(void);
		void setWeapon(Weapon &weaponB);
		HumanB(std::string const &name1);
};
#endif
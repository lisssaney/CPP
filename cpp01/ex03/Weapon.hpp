#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string type;
	public:
		std::string const getType(void) const;
		void setType(std::string type);
		Weapon(std::string const &type1);
};

#endif
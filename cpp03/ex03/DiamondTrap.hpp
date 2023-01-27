# ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <cmath>
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        ~DiamondTrap(void);
        DiamondTrap(const DiamondTrap &other);
        DiamondTrap &operator=(const DiamondTrap &other1);
        void whoAmI();
        void attack(std::string const & target);
    private:
        std::string _name;

};

#endif
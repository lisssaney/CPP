# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <cmath>
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        void highFivesGuys(void);
        FragTrap(const FragTrap &other);
        FragTrap &operator=(const FragTrap &other1);
    private:
        static unsigned int _hf;
};

//FragTrap::_hf = 0;
#endif
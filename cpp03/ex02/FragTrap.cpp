#include "FragTrap.hpp"

unsigned int FragTrap::_hf = 0;

FragTrap::FragTrap() : ClapTrap()
{
   // _hf = 0;
    setName("-no name was given-");
    setHP(100);
    setEP(100);
    setAD(30);
    std::cout << "Nameless constructor was called FRAG" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
   // _hf = 0;
    setName(name);
    setHP(100);
    setEP(100);
    setAD(30);
    std::cout << "Constructor was called FRAG" << std::endl;  
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor was called FRAG" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    _hf++;
    std::cout << getName() << " gave a high five, so " << _hf << " was given" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "Copy constructor called FRAG" << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other1)
{
	 std::cout << "Assignation operator called FRAG" << std::endl;
    if (this == &other1)
        return (*this);
    _name = other1.getName();
    _hp = other1.getHP();
    _ep = other1.getEP();
    _ad = other1.getAD();
    return (*this);
}
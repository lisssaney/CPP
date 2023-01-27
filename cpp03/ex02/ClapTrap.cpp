#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("-no name was given-"), _hp(10), _ep(10), _ad(0)
{
    std::cout <<  "Nameless constructor was called CLAP" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
    std::cout <<  "Constructor was called CLAP" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor was called CLAP" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hp == 0)
    {
        std::cout << _name << " is dead" << std::endl;
        return ;
    }
    else
    {
        _hp -= amount;
        if (_hp < 0)
            _hp = 0;
        std::cout << _name << " took damage. hp = " << _hp << std::endl;
    }
}

 void ClapTrap::beRepaired(unsigned int amount)
 {
    if (_hp == 0)
    {
        std::cout << _name << "is dead" << std::endl;
        return ;
    }
    else
    {
        _hp += amount;
       // if (_hp > _ep)
         //   _hp = _ep;
        std::cout << _name << " was repaired. hp = " << _hp << std::endl;
    }
 }

 void ClapTrap::attack(std::string const & target)
 {
     if (_hp == 0)
     {
        std::cout << _name << " is dead. attack is not possible" << std::endl;
        return ;
     }
     else
     {
         std::cout << "ClapTrap " << _name << " attack " << target << " causing "
         << _ad << " points of damage!\n";
     }
 }

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called CLAP" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other1)
{
	std::cout << "Assignation operator called CLAP" << std::endl;
	if (this == &other1)
		return (*this);
    this->_name = other1._name;
    this->_hp = other1._hp;
    this->_ep = other1._ep;
    this->_ad = other1._ad;
    return (*this);
}

std::string ClapTrap::getName(void) const
{
    return (_name);
}

void ClapTrap::setName(std::string name)
{
    _name = name;
}

int ClapTrap::getHP(void) const
{
    return (_hp);
}

void ClapTrap::setHP(int hp)
{
    _hp = hp;
}

int ClapTrap::getEP(void) const
{
    return (_ep);
}

void ClapTrap::setEP(int ep)
{
    _ep = ep;
}

int ClapTrap::getAD(void) const
{
    return (_ad);
}

void ClapTrap::setAD(int ad)
{
    _ad = ad;
}
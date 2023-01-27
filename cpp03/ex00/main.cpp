#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("gbump");

    b.takeDamage(5);
    b.takeDamage(7);
    b.takeDamage(7);
    b.attack("1MONSTER1");
    a.takeDamage(4);
    a.beRepaired(3);
    a.attack("2MONSTER2");
    return (0);
}
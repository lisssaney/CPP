#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap a;
    ScavTrap b("gbump");

    a.guardGate();
    b.guardGate();
    a.takeDamage(50);
    a.takeDamage(50);
    a.takeDamage(50);
    b.takeDamage(99);
    a.beRepaired(50);
    b.beRepaired(16);
    a.attack("2MONSTER2");
    b.attack("1MONSTER1");
    return (0);
}
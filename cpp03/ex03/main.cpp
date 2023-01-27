#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a;
    DiamondTrap b("gbump");

    a.guardGate();
    b.guardGate();

   a.whoAmI();
    b.whoAmI();

    b.highFivesGuys();
    b.highFivesGuys();
    a.highFivesGuys();
    a.takeDamage(50);
    a.takeDamage(50);
    a.takeDamage(50);
    b.takeDamage(30);
   a.beRepaired(50);
    b.beRepaired(16);
    a.attack("2MONSTER2");
    b.attack("1MONSTER1");
    return (0);
}
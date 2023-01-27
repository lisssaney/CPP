# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cmath>

class ClapTrap
{
    protected:
        std::string _name;
        int _hp;
        int _ep;
        int _ad;
    public:
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string name);
        ClapTrap (const ClapTrap &other);
        ClapTrap &operator=(const ClapTrap &other1);
        std::string getName(void) const;
        void setName(std::string name);
        int getHP(void) const;
        void setHP(int hp);
        int getEP(void) const;
        void setEP(int ep);
        int getAD(void) const;
        void setAD(int ad);
};

#endif
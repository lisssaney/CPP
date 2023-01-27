#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
	public:
		void set_name(std::string name);
		void announce(void);
		~Zombie(void);
		Zombie(void);
		Zombie(std::string name);
	private:
		std::string name;

};

Zombie *newZombie( std::string name );
void randomChump( std::string name );

#endif
#include "Zombie.hpp"

Zombie::Zombie(void){ }

// void Zombie::set_name(std::string name)
// {
// 	this->name = name;
// }

void Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is dead. good for him:)" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}
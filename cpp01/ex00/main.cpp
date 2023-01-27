#include "Zombie.hpp"

int main(void)
{
	Zombie *zomb = newZombie("zomb1");
	zomb->announce();
	randomChump("zomb2");
	randomChump("zomb3");
	delete zomb;
}
#include "Zombie.hpp"

int main(void)
{
	Zombie *zomb = zombieHorde(3, "lol");
	for (int i = 0; i < 3; i++)
	{
		zomb[i].announce();
		//delete zomb[i];
	}
	delete[] zomb;
}
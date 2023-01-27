
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define TOTAL 6

int main()
{
	Animal* animals[TOTAL];

    std::cout << "--- Animal creation ---" << std::endl;

	for(int i = 0; i < TOTAL; i++)
	{
		if(i % 2 == 0)
        {
			animals[i] = new Dog();
            std::cout << std::endl;
        }
		else
        {
			animals[i] = new Cat();
            std::cout << std::endl;
        }
	}
    std::cout << "--- Animal destruction ---" << std::endl;
	for(int i = 0; i < TOTAL; i++)
    {
        animals[i]->makeSound();
		delete animals[i];
        std::cout << std::endl;
    }

	std::cout << "--- Deep copy ---" << std::endl;

    Dog *dog = new Dog();
    Dog *copydog = new Dog();
    std::cout << std::endl;
    for(int i = 0; i < 10; i++)
        std::cout << "Dog idea: " << dog->getBrain().getIdeas(i)<< " - Copydog idea: "
            << copydog->getBrain().getIdeas(i) << std::endl; 
    std::cout << std::endl;
    *copydog = *dog;
    delete dog;
    std::cout << std::endl;
    for(int i = 0; i < 10; i++)
        std::cout << "CopyDog idea: " << copydog->getBrain().getIdeas(i) << std::endl;
    std::cout << std::endl;
   // Animal animal;
	return 0;
}
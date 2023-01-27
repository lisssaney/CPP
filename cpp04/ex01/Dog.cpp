#include "Dog.hpp"

Dog::Dog(void)
{
    setType("Dog");
    _DogBrain = new Brain();
    std::cout << "Dog constructor was called" << std::endl; 
}

Dog::~Dog(void)
{
    delete _DogBrain;
    std::cout << "Dog destructor was called" << std::endl; 
}

Dog::Dog(const Dog &other)
{
    this->_DogBrain = new Brain(other.getBrain());
    setType(other.getType());
}

Dog &Dog::operator=(const Dog &other)
{
    if (this == &other)
        return (*this);
    setType(other.getType());
    delete _DogBrain;
    this->_DogBrain = new Brain(other.getBrain());
    return (*this);
}

Brain &Dog::getBrain() const
{
	return (*_DogBrain);
}

void Dog::makeSound() const
{
    std::cout << getType() << " waff" << std::endl;
}
#include "Dog.hpp"

Dog::Dog(void)
{
    setType("Dog");
    std::cout << "Dog constructor was called" << std::endl; 
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor was called" << std::endl; 
}

Dog::Dog(const Dog &other)
{
    setType(other.getType());
}

Dog &Dog::operator=(const Dog &other)
{
    if (this == &other)
        return (*this);
    setType(other.getType());
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << getType() << " waff" << std::endl;
}
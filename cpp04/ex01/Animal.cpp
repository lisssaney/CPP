#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
    std::cout << "Animal constructor was called" << std::endl; 
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor was called" << std::endl; 
}

Animal::Animal(const Animal &other)
{
    this->_type = other.getType();
}

Animal &Animal::operator=(const Animal &other)
{
    if (this == &other)
        return (*this);
    _type = other.getType();
    return (*this);
}

std::string Animal::getType(void) const
{
    return(_type);
}

void Animal::setType(std::string type)
{
    _type = type;
}

void Animal::makeSound() const
{
    std::cout << _type << " makes sound" << std::endl;
}
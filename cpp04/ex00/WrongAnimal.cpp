#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor was called" << std::endl; 
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor was called" << std::endl; 
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    this->_type = other.getType();
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this == &other)
        return (*this);
    _type = other.getType();
    return (*this);
}

std::string WrongAnimal::getType(void) const
{
    return(_type);
}

void WrongAnimal::setType(std::string type)
{
    _type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout << _type << " makes wrong sound" << std::endl;
}
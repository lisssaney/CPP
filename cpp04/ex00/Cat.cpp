#include "Cat.hpp"

Cat::Cat(void)
{
    setType("Cat");
    std::cout << "Cat constructor was called" << std::endl; 
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor was called" << std::endl; 
}

Cat::Cat(const Cat &other)
{
    setType(other.getType());
}

Cat &Cat::operator=(const Cat &other)
{
    if (this == &other)
        return (*this);
    setType(other.getType());
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << getType() << " meow" << std::endl;
}
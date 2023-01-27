#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    setType("WrongCat");
    std::cout << "WrongCat constructor was called" << std::endl; 
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor was called" << std::endl; 
}

WrongCat::WrongCat(const WrongCat &other)
{
    setType(other.getType());
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this == &other)
        return (*this);
    setType(other.getType());
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << getType() << " wrong meow" << std::endl;
}
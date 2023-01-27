#include "Cat.hpp"

Cat::Cat(void)
{
    setType("Cat");
    this->_CatBrain = new Brain();
    std::cout << "Cat constructor was called" << std::endl; 
}

Cat::~Cat(void)
{
    delete this->_CatBrain;
    std::cout << "Cat destructor was called" << std::endl; 
}

Brain &Cat::getBrain() const
{
	return (*_CatBrain);
}

Cat::Cat(const Cat &other)
{
    this->_CatBrain = new Brain(other.getBrain());
    setType(other.getType());
}

Cat &Cat::operator=(const Cat &other)
{
    if (this == &other)
        return (*this);
    setType(other.getType());
    this->_CatBrain = new Brain(other.getBrain());
    delete _CatBrain;

    return (*this);
}

void Cat::makeSound() const
{
    std::cout << getType() << " meow" << std::endl;
}
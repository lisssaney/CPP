#include "Brain.hpp"
#include <string>

Brain::Brain(void)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = std::to_string(rand());
    std::cout << "Brain Constructor called" << std::endl;
}

std::string Brain::getIdeas(int i) const
{
    return (this->_ideas[i]);
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constructor wad called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = other._ideas[i];
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain assignation operator was called" << std::endl;
    if (this == &other)
        return (*this);
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = other._ideas[i];
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain Destructor called" << std::endl;
}

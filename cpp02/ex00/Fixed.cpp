# include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
	std::cout << "getRawBits member function called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

Fixed::Fixed(const Fixed &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = fix.getRawBits();
}

Fixed & Fixed::operator = (const Fixed &fix)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fix)
		return (*this);
	this->value = fix.getRawBits();
	return (*this);
}
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
	//std::cout << "getRawBits member function called" << std::endl;
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

int Fixed::toInt( void ) const
{
	return ((int)(this->value >> this->numb));
}

Fixed::Fixed (const int &inter)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = inter << this->numb;
}

Fixed::Fixed (const float &fl)
{
	std::cout << "Float constructor called" << std::endl;
	value = ((int)(roundf(fl * (1 << this->numb))));
}

float Fixed::toFloat( void ) const
{
	return (((float)this->value / (float)(1 << this->numb)));
}

std::ostream &operator << (std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return (out);
} // нужно для выводы toFloat (если выводу передали  Fixed вызываем эту ф-ию)

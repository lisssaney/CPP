# include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
//	std::cout << "getRawBits member function called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

Fixed::Fixed(const Fixed &fix)
{
//	std::cout << "Copy constructor called" << std::endl;
	this->value = fix.getRawBits();
}

Fixed & Fixed::operator = (const Fixed &fix)
{
//	std::cout << "Assignation operator called" << std::endl;
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
//	std::cout << "Int constructor called" << std::endl;
	this->value = inter << this->numb;
}

Fixed::Fixed (const float &fl)
{
//	std::cout << "Float constructor called" << std::endl;
	value = ((int)(roundf(fl * (1 << this->numb))));
}

float Fixed::toFloat( void ) const
{
	return (((float)this->value / (float)(1 << this->numb)));
}

Fixed Fixed::operator * (const Fixed &fix) const
{
    Fixed tmp;
    tmp.value = ((value * fix.getRawBits()) >> numb);
    return (tmp);
}

Fixed Fixed::operator / (const Fixed &fix) const
{
    Fixed tmp;
    tmp.value = ((value << numb) * fix.getRawBits());
    return (tmp);
}

Fixed Fixed::operator + (const Fixed &fix) const
{
    Fixed tmp;
    tmp.value = value + fix.getRawBits();
    return (tmp);
}

Fixed Fixed::operator - (const Fixed &fix) const
{
    Fixed tmp;
    tmp.value = value - fix.getRawBits();
    return (tmp);
}

bool Fixed::operator < (const Fixed &fix) const
{
    return (value < fix.getRawBits());
}

bool Fixed::operator <= (const Fixed &fix) const
{
    return (value <= fix.getRawBits());
}

bool Fixed::operator > (const Fixed &fix) const
{
    return (value > fix.getRawBits());
}

bool Fixed::operator >= (const Fixed &fix) const
{
    return (value >= fix.getRawBits());
}

bool Fixed::operator == (const Fixed &fix) const
{
    return (value == fix.getRawBits());
}

bool Fixed::operator != (const Fixed &fix) const
{
    return (value != fix.getRawBits());
}

Fixed Fixed::operator++()
{
    this->value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    value += 1;
    return (tmp);
}

Fixed Fixed::operator--()
{
    this->value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    value -= 1;
    return (tmp);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed const &min(Fixed const &a, Fixed const &b)
{
    return(Fixed::min(a, b));
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return (b);
    return (a);
}

Fixed const &max(Fixed const &a, Fixed const &b)
{
    return (Fixed::max(a, b));
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a < b)
        return (b);
    return (a);
}

Fixed &max(Fixed &a, Fixed &b)
{
    return (Fixed::max(a, b));
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed &min(Fixed &a, Fixed &b)
{
    return (Fixed::min(a, b));
}

std::ostream &operator << (std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return (out);
} // нужно для выводы toFloat (если выводу передали  Fixed вызываем эту ф-ию)
# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int value;
		static const int numb = 8;
	public:
		Fixed();
		~Fixed();
		int getRawBits( void ) const; 
		void setRawBits( int const raw );
		Fixed (const Fixed &fix);
		Fixed & operator = (const Fixed &fix); // конструктор копирования
        Fixed operator * (const Fixed &fix) const;
        Fixed operator / (const Fixed &fix) const;
        Fixed operator + (const Fixed &fix) const;
        Fixed operator - (const Fixed &fix) const;

        bool operator < (const Fixed &fix) const;
        bool operator > (const Fixed &fix) const;
        bool operator >= (const Fixed &fix) const;
        bool operator <= (const Fixed &fix) const;
        bool operator == (const Fixed &fix) const;
        bool operator != (const Fixed &fix) const;

        Fixed operator++(int);
        Fixed operator++();
        Fixed operator--(int);
        Fixed operator--();

        static Fixed const &min(Fixed const &a, Fixed const &b);
        static Fixed const &max(Fixed const &a, Fixed const &b);
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);

        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed (const int &inter);
        Fixed (const float &fl);

};

std::ostream &operator << (std::ostream &out, const Fixed &fix);
#endif
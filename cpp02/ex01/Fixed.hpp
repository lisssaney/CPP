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
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed (const int &inter);
        Fixed (const float &fl);

};

std::ostream &operator << (std::ostream &out, const Fixed &fix);
#endif
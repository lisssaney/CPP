# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
};

#endif
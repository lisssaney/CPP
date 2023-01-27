#ifndef KAREN_HPP
# define KAREN_HPP
#include <iostream>
#include <string>

class Karen
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		//Find find[4];
	public:
		//char str[4];
		//str[0] = debug(void);
		void complain( std::string level );
		void	(Karen::*choose_lev[4])(void);
		//void go_comp(int i);
		//fun _func[4];
		Karen(void);
};

#endif

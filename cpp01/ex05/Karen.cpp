# include "Karen.hpp"

void Karen::debug( void )
{
	std::cout << "DEBUG I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info( void )
{
	std::cout << "INFO I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" ;
}

void Karen::warning( void )
{
	std::cout << "WARNING I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void Karen::error( void )
{
	std::cout << "ERROR This is unacceptable, I want to speak to the manager now.\n";
}

void Karen::complain( std::string level )
{

	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	choose_lev[0] = &Karen::debug;
	choose_lev[1] = &Karen::info;
	choose_lev[2] = &Karen::warning;
	choose_lev[3] = &Karen::error;
	int i;
	for (i = 0; i < 4; i++)
	{
		if (level == str[i])
			(this->*choose_lev[i])();
			//break ;
	}
	//(this->*choose_lev[i])();
}

Karen::Karen(void)
{
}

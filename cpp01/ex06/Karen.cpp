# include "Karen.hpp"

void Karen::debug( void )
{
    std::cout << "[ DEBUG ]\n";
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info( void )
{
    std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" ;
}

void Karen::warning( void )
{
    std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void Karen::error( void )
{
    std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
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
            break ; 
            //return (i);
			//(this->*choose_lev[i])();
	}
    switch (i)
    {
        case 0: (this->*choose_lev[0])();
        case 1: (this->*choose_lev[1])();
        case 2: (this->*choose_lev[2])();
        case 3: (this->*choose_lev[3])();
        default: 
            if (i > 3)
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

    }
}

Karen::Karen(void)
{
}

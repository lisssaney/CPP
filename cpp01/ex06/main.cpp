# include "Karen.hpp"

int main(int argc, char *argv[])
{
	Karen karen;

    if (argc != 2)
        return (1);
    else
        karen.complain(argv[1]);
    return (0);
	// karen.complain("DEBUG");
	// std::cout << std::endl;
	// karen.complain("INFO");
	// std::cout << std::endl;
	// karen.complain("WARNING");
	// std::cout << std::endl;
	// karen.complain("ERROR");
}
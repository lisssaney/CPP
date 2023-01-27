#include <iostream>
#include <cstdlib>
#include <cstring>
#include <limits>
#include <cmath>
#include <cctype>


int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Problems with arguments"  << std::endl;
        return 1;
    }
    std::string str = argv[1];
    int ft = 0;
    std::string case1[] = {"nan", "-inf", "+inf"};
    std::string case2[] = {"nanf", "-inff", "+inff"};
    for (int i = 0; i < 3; i++)
    {
        if ((case1[i].compare(str) == 0) || (case2[i].compare(str) == 0))
        {
            std::cout << "Float: " << case2[i] << std::endl;
            std::cout << "Double: " << case1[i] << std::endl;
            std::cout << "Int: impossible" << std::endl;
            std::cout << "Char: impossible" << std::endl;
            return 0;
        }
    }
    if (str.length() == 1 && ft_isdigit(str[0]) == 0)
    {
        int a = str[0];
        std::cout << "Float: " << static_cast<float>(a) << ".0f" << std::endl;
        std::cout << "Double: " << static_cast<double>(a) << ".0" << std::endl;
        std::cout << "Int: " << a << std::endl;
        std::cout << "Char: '" << str[0] << "'" << std::endl;
        return (0);
    }
    for (int i = 0; i < (int)str.length(); i++)
    {
        if ((ft_isdigit(str[i]) == 0) && ((str[i] != '.')))
        {         
            if (ft != 0 && str[i] == 'f' && i == (int)str.length() - 1)
                break ;
            std::cout << "Float: impossible" << std::endl;
            std::cout << "Double: impossible" << std::endl;
            std::cout << "Int: impossible" << std::endl;
            std::cout << "Char: impossible" << std::endl;
            return (1);
        }
        if (str[i] == '.')
            ft = i;
    }
    double tmp = atof(str.c_str());
    std::cout << "Float: " << static_cast<float>(tmp); 
    if (ft == 0 || (ft != 0 && str[str.length() - 1] == '0')
        || (ft != 0 && str[str.length() - 2] == '0' && str[str.length() - 1] == 'f'))
        std::cout << ".0f" << std::endl;
    else
    {
        ft = -1;
        std::cout << "f" << std::endl;
    }
    std::cout << "Double: " << static_cast<double>(tmp);
    if (ft == 0 || (ft != 0 && str[str.length() - 1] == '0')
        || (ft != 0 && str[str.length() - 2] == '0' && str[str.length() - 1] == 'f'))
        std::cout << ".0" << std::endl;
    else
        std::cout << std::endl;
    std::cout << "Int: " << static_cast<int>(tmp) << std::endl;
    if ((ft_isprint(static_cast<int>(tmp)) != 0 && ft != -1)
        || (ft != 0 && str[str.length() - 1] == '0'
        && ft_isprint(static_cast<int>(tmp)) != 0))
        std::cout << "Char: '" << static_cast<char>(tmp) << "'" << std::endl;
    else
        std::cout << "Char: Non displayable" << std::endl;
    return 0;
}
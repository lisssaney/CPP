# include  <iostream>

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

int main(int argc, char *argv[])
{
    int i;
    int j;

    if (argc > 1)
    {
        i = 0;
        while (argv[++i])
        {
            j = -1;
            while (argv[i][++j])
                argv[i][j] = ft_toupper(argv[i][j]);
            std::cout << argv[i]; 
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl; 
    return (0);
}

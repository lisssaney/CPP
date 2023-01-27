#include "span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    // for (int i = 0; i < 6; i++)
    // {
    //     std::cout << sp.get <<std::end;
    // }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    try
    {
        sp.addNumber(12);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    Span sp1;
    try
    {
        sp1.addNumber(234);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        sp1.longestSpan();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    Span extra(100000);

    for (int i = 43; i < 10000; i += 2)
    {
        extra.addNumber(i);
    }
    extra.addNumber(18009);
    extra.addNumber(17567);
    std::cout << extra.shortestSpan() << std::endl;
    std::cout << extra.longestSpan() << std::endl;
    Span extra1(100000);
    extra1.addNumber1(7, 10000);
    std::cout << extra1.shortestSpan() << std::endl;
    std::cout << extra1.longestSpan() << std::endl;
}
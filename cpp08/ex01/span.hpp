#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>

class Span
{
    private:
        unsigned int N;
        std::vector<int> _vec;
        unsigned int add;
    public:
        Span();
        Span(unsigned int max);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;
        void addNumber(int add);
        void addNumber1(int st, int end);
    class Space : public std::exception
    {
        const char *what() const throw()
        {
            return ("Not enough space");
        }
    };

    class Elements : public std::exception
    {
        const char *what() const throw()
        {
            return ("Not enough elements");
        }
    };
};

#endif
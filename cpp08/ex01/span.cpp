#include "span.hpp"

Span::Span(unsigned int max): N(max), add(0) {}

Span::Span() : N(0), add(0) {}

Span::Span(const Span &other)
{
    N = other.N;
    _vec = other._vec;
	add = 0;
}

Span &Span::operator = (const Span &other)
{
	if (this == &other)
		return (*this);
    N = other.N;
    _vec = other._vec;
	add = 0;
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int num)
{
	if (add < N)
	{
		_vec.push_back(num);
		++add;
		std::sort(_vec.begin(), _vec.end());
	}
	else
	 	throw Span::Space();
}

void Span::addNumber1(int st, int end)
{
	for (int i = st; i <= end; i++)
	{
		Span::addNumber(i);
	}
}

unsigned int Span::shortestSpan() const
{
	if (add <= 1)
		throw Span::Elements();
	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator it11;
	unsigned int shortest = static_cast<unsigned int>(_vec[1] - _vec[0]);
	unsigned int current = 0;
	it = _vec.begin();
	it11 = _vec.begin();
	it++;
	while (it != _vec.end())
	{
		current = static_cast<unsigned int>(*(it) - *it11);
		if (current < shortest)
			shortest = current;
		it11++;
		it++;
	}
	return (shortest);
}


unsigned int Span::longestSpan(void) const
{
	 if (add/*this->N.size()*/ <= 1)
	 	throw Span::Elements();

	int big = *std::max_element(this->_vec.begin(), this->_vec.end());
	int small = *std::min_element(this->_vec.begin(), this->_vec.end());
	return (std::abs(big - small));
}


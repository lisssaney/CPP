#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template<class T>
class Array
{
private:
    T *arr;
    unsigned int _size;
public:
    Array();
    Array(unsigned int n);
    Array(const Array &other);
    Array &operator = (const Array &other);
    ~Array();
    T &operator [] (int index);
    T &operator [] (int index) const;
    unsigned int size(void) const;
	class Out: public std::exception 
    {
		virtual const char* what() const throw()
        {
            return ("Out of range");
        }
	};
	class Empty: public std::exception 
    {
		virtual const char* what() const throw()
        {
            return ("Array is empty");
        }
	};
};

template<typename T>
Array<T>::Array(): arr(nullptr), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n): arr(new T[n]), _size(n) {}

template<typename T>
Array<T>::Array(const Array &other)
{
    arr = new T[other._size];
    for (size_t i = 0; i < other._size; ++i)
        arr[i] = other.arr[i];
    _size = other._size;
}

template<typename T>
Array<T>::~Array()
{
	if (this->_size > 0)
		delete[] this->arr;
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &other)
{
    if (this == &other)
        return (*this);
	if (this->_size > 0)
		delete[] this->arr;
	this->arr = nullptr;
	if (other._size > 0)
	{
		this->arr = new T[other._size]();
		for (size_t i = 0; i < other._size; i++)
			this->arr[i] = other.arr[i];
	}
	this->_size = other._size;
	return (*this);
}

template<typename T>
T &Array<T>::operator[](int index)
{
    if (!this->arr)
        throw Empty();
    if (index < 0 || index >= (int)this->_size)
        throw Out();
	return (this->arr[index]);
}

template<typename T>
T &Array<T>::operator[](int index) const
{
    if (!this->arr)
        throw Empty();
    if (index < 0 || index >= (int)this->_size)
        throw Out();
	return (this->arr[index]);
}

template<typename T>
unsigned int Array<T>::size(void) const
{
	return (this->_size);
}
#endif
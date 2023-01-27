#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
#include "Contacts.hpp"
# include <cstring>
#include <iomanip>
#include <cstdlib>
//int index = 0;
class Phonebook
{
	private:
		Contacts people[8];
	public:
		void add_person(void);
		void search_person(void);
		void print_search(int index, std::string str);
		int index;
};

#endif
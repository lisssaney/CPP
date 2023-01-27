#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <iostream>
# include <string>
# include <cstring>
#include <iomanip>
#include <cstdlib>

class Contacts
{
	private:
		std::string f_name;
		std::string l_name;
		std::string nick;
		std::string phone;
		std::string secret;
	public:
		void set_fname(std::string str);
		std::string get_fname(void);
		void set_lname(std::string str);
		std::string get_lname(void);
		void set_nick(std::string str);
		std::string get_nick(void);
		void set_phone(std::string str);
		std::string get_phone(void);
		void set_secret(std::string str);
		std::string get_secret(void);
	//	void print_search(int index, std::string str);
};

#endif
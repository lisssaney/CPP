# include "Phonebook.hpp"

void Phonebook::print_search(int ind, std::string str)
{
	if (ind != -1)
		std::cout << std::setw(10) << ind << "|";
	else
	{
		if (str.length() > 10)
			std::cout << str.erase(8, str.length() - 9) << "." << "|";
		else
			std::cout << std::setw(10) << str << "|";
	}
}

void Phonebook::add_person(void)
{
	std::string input;
	std::cout << "add first name: ";
	std::getline(std::cin, input);
	this->people[index].set_fname(input);
	std::cout << "add last name: ";
	std::getline(std::cin, input);
	this->people[index].set_lname(input);
	std::cout << "add nickname: ";
	std::getline(std::cin, input);
	this->people[index].set_nick(input);
	std::cout << "add phone number: ";
	std::getline(std::cin, input);
	this->people[index].set_phone(input);
	std::cout << "add dark secret: ";
	std::getline(std::cin, input);
	this->people[index].set_secret(input);
	if (index < 7)
		index++;
	else
		index = 0;

}
void Phonebook::search_person(void)
{
	int input1;
    std::cout << "     index|first name| last name|  nickname|" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
	for (int ind = 0; ind < index; ind++)
	{
		print_search(ind, this->people[ind].get_fname());
		print_search(-1, this->people[ind].get_fname());
		print_search(-1, this->people[ind].get_lname());
		print_search(-1, this->people[ind].get_nick());
		std::cout << std::endl;
	}
	if (index != 0)
	{
		std::cout << "give me index in the phonebook " << 0 << ":" << index - 1 << ": ";
		std::cin >> input1;
		if (input1 >= 0 && input1 <= index - 1)
		{
			std::cout << "first name: " << this->people[input1].get_fname() << std::endl;
			std::cout << "last name: " << this->people[input1].get_lname()  << std::endl;
			std::cout << "nickname: " << this->people[input1].get_nick()  << std::endl;
			std::cout << "phone number: " << this->people[input1].get_phone()  << std::endl;
			std::cout << "dark secret: " << this->people[input1].get_secret()  << std::endl;
		}
		else
		{
			std::cout << "you dont have people in your phonebook\n";
		}
	}
}

int main(void)
{
	Phonebook book;
	bool exit = true;
	std::string str;
	book.index = 0;
	while (exit)
	{
		std::getline(std::cin, str);
		if (str == "ADD")
		{
			book.add_person();
		}
		else if (str == "SEARCH")
		{
			book.search_person();
		}
		else if (str == "EXIT")
		{
			exit = false;

			std::cout << "bye, baby!\n";
			continue ;
		}
	}
}
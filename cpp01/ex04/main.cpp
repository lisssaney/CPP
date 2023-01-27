# include "File.hpp"
#include <fstream>

int File::Work_file(void)
{
	std::string str;

	std::ifstream file(this->_filename);;
	if (!file.is_open())
	{
		std::cout << "File doesnt exist\n";
		return (-1);
	}
	std::ofstream file_copy(this->_filename.append(".replace"));
	while (std::getline(file, str))
	{
		size_t      pos;

		pos = 0;
		while ((pos = str.find(this->_s1, pos)) != -1)
		{
			str.erase(pos, this->_s1.length());
			str.insert(pos, this->_s2);
			pos += this->_s2.length();
		}
		file_copy << str;
		file_copy << std::endl;
		std::cout << str << std::endl;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	char str[10];
	int count;
	if (argc != 4)
	{
		std::cout << "Argument error!\n";
		return (1);
	}
	File file(argv[1], argv[2], argv[3]);
	if (file.Work_file() == -1)
		return (1);
	return (0);
}
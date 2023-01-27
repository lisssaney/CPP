#ifndef FILE_HPP
# define FILE_HPP
#include <iostream>
#include <string>
#include <fstream>

class File
{
	private:
		std::string _s1;
		std::string _s2;
		std::string _filename;
	public:
		File(std::string filename, std::string s1, std::string s2)
		{
			this->_s1.assign(s1);
			this->_s2.assign(s2);
			this->_filename.assign(filename);
		}
		int Work_file(void);

};

#endif
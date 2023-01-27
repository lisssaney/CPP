#include "Contacts.hpp"

void Contacts::set_fname(std::string str)
{
	this->f_name = str;
}

std::string Contacts::get_fname(void)
{
	return (this->f_name);
}

void Contacts::set_lname(std::string str)
{
	this->l_name = str;
}

std::string Contacts::get_lname(void)
{
	return (this->l_name);
}

void Contacts::set_nick(std::string str)
{
	this->nick = str;
}

std::string Contacts::get_nick(void)
{
	return (this->nick);
}

void Contacts::set_phone(std::string str)
{
	this->phone = str;
}

std::string Contacts::get_phone(void)
{
	return (this->phone);
}

void Contacts::set_secret(std::string str)
{
	this->secret = str;
}

std::string Contacts::get_secret(void)
{
	return (this->secret);
}
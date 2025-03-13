# include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Animal::Animal(const std::string type) : type(type)
{
	std::cout << GREEN << "Type constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << GREEN << "Assignation operator called" << RESET << std::endl;
	if (this == &other)
		return *this;
	type = other.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

std::string		Animal::getType() const
{
	return type;
}

std::string		Animal::setType(std::string type)
{
	this->type = type;
	return type;
}


// void	Animal::makeSound() const
// {
// 	std::cout << CYAN << "Animal sound" << RESET << std::endl;
// }
# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : type(type)
{
	std::cout << GREEN << "Type constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
	std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << GREEN << "Assignation operator called" << RESET << std::endl;
	if (this == &other)
		return *this;
	type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

std::string		WrongAnimal::getType() const
{
	return type;
}

std::string		WrongAnimal::setType(std::string type)
{
	this->type = type;
	return type;
}


void	WrongAnimal::makeSound() const
{
	std::cout << CYAN << "WrongAnimal sound" << RESET << std::endl;
}
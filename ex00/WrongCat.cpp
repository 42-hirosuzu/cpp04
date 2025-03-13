# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << GREEN << "WrongCat Default constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const::WrongCat& other) : WrongAnimal(other)
{
	std::cout << GREEN << "WrongCat Copy constructor called" << RESET << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << GREEN << "WrongCat Assignation operator called" << RESET << std::endl;
	if (this == &other)
		return *this;
	WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << RED << "WrongCat Destructor called" << RESET << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << CYAN << "nyan" << RESET << std::endl;
}

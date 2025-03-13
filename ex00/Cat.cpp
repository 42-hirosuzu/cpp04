# include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << GREEN << "Cat Default constructor called" << RESET << std::endl;
}

Cat::Cat(const::Cat& other) : Animal(other)
{
	std::cout << GREEN << "Cat Copy constructor called" << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << GREEN << "Cat Assignation operator called" << RESET << std::endl;
	if (this == &other)
		return *this;
	Animal::operator=(other);
	return *this;
}

Cat::~Cat()
{
	std::cout << RED << "Cat Destructor called" << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << CYAN << "nyan" << RESET << std::endl;
}

# include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << GREEN << "Dog Default constructor called" << RESET << std::endl;
}

Dog::Dog(const::Dog& other) : Animal(other)
{
	std::cout << GREEN << "Dog Copy constructor called" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << GREEN << "Dog Assignation operator called" << RESET << std::endl;
	if (this == &other)
		return *this;
	Animal::operator=(other);
	return *this;
}

Dog::~Dog()
{
	std::cout << RED << "Dog Destructor called" << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << CYAN << "inu" << RESET << std::endl;
}

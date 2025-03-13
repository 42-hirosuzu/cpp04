# include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->brain = new Brain();
	std::cout << GREEN << "Cat Default constructor called" << RESET << std::endl;
}

Cat::Cat(const::Cat& other) : Animal(other)
{
	this->brain = new Brain(*other.brain);
	std::cout << GREEN << "Cat Copy constructor called" << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << GREEN << "Cat Assignation operator called" << RESET << std::endl;
	if (this == &other)
		return *this;
	else
	{
		delete this->brain;
		Animal::operator=(other);
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << RED << "Cat Destructor called" << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << CYAN << "nyan" << RESET << std::endl;
}

std::string		Cat::getIdea(int index) const
{
	return brain->getIdea(index);
}

std::string		Cat::setIdea(int index, std::string idea)
{
	return brain->setIdea(index, idea);
}
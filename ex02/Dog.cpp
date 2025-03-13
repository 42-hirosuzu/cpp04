# include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain();
	std::cout << GREEN << "Dog Default constructor called" << RESET << std::endl;
}

Dog::Dog(const::Dog& other) : Animal(other)
{
	this->brain = new Brain(*other.brain);
	std::cout << GREEN << "Dog Copy constructor called" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << GREEN << "Dog Assignation operator called" << RESET << std::endl;
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

Dog::~Dog()
{
	delete this->brain;
	std::cout << RED << "Dog Destructor called" << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << CYAN << "inu" << RESET << std::endl;
}

std::string		Dog::getIdea(int index) const
{
	return brain->getIdea(index);
}

std::string		Dog::setIdea(int index, std::string idea)
{
	return brain->setIdea(index, idea);
}

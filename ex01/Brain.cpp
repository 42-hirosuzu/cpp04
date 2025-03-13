# include "Brain.hpp"

Brain::Brain()
{
	std::cout << GREEN << "Brain Default constructor called" << RESET << std::endl;
	for (int i = 0; i < COUNT; i++)
        ideas[i] = "NULL";
}

Brain::Brain(const Brain& other)
{
	std::cout << GREEN << "Brain Copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << GREEN << "Brain Assignation operator called" << RESET << std::endl;
	if (this == &other)
		return *this;
	for (int i = 0; i < COUNT; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << RED << "Brain Destructor called" << RESET << std::endl;
}

std::string		Brain::getIdea(int index) const
{
	if (index < 0 || index >= COUNT)
	{
		std::cout << RED << "Index out of range" << RESET << std::endl;
		return "NULL";
	}
	
	return ideas[index];
}

std::string		Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index >= COUNT)
	{
		std::cout << RED << "Index out of range" << RESET << std::endl;
		return "NULL";
	}
	ideas[index] = idea;
	return ideas[index];
}
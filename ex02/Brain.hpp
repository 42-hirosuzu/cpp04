# ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "Animal.hpp"

# define COUNT 100

class Brain
{
public:
	Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	~Brain();

	std::string		getIdea(int index) const;
	std::string		setIdea(int index, const std::string idea);

private:
	std::string ideas[COUNT];
};

# endif // BRAIN_HPP
# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	virtual ~Dog();

	virtual void	makeSound() const;
	std::string		getIdea(int index) const;
	std::string		setIdea(int index, const std::string idea);

private:
	Brain* brain;
};

# endif // DOG_HPP
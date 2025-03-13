# ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	virtual ~Cat();

	virtual void	makeSound() const;
	std::string		getIdea(int index) const;
	std::string		setIdea(int index, const std::string idea);

private:
	Brain* brain;
};

# endif // CAT_HPP
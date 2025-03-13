# ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const std::string type);
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);
	~WrongAnimal();

	std::string		getType() const;
	std::string		setType(std::string type);
	void	makeSound() const;

protected:
	std::string type;
};

# endif // WRONGANIMAL_HPP
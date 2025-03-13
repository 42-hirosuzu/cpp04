#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); // ネコの鳴き声を出力するはず！
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\n=== Wrong Animal Test ===" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	WrongCat wrongCat2; 

	std::cout << "wrongCat type: " << wrongCat->getType() << std::endl;

	wrongCat->makeSound();   // WrongCat::makeSoundだが、virtual でないため注意
	wrongMeta->makeSound();  // WrongAnimal::makeSound
	wrongCat2.makeSound();  // WrongCat::makeSound
	
	delete wrongCat;
	delete wrongMeta;


	return 0;
}
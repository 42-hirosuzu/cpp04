#include <iostream>
#include <sstream> 
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	std::cout << "=== Test 1: Simple creation and deletion ===" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << std::endl << "=== Test 2: Array of Animals (Dog / Cat) ===" << std::endl << std::endl;

	const int N = 4;
	Animal* animals[N];

	for (int i = 0; i < N; i++)
	{
		if (i < N / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < N; i++)
	{
		animals[i]->makeSound();
	}

	for (int i = 0; i < N; i++)
	{
		delete animals[i];
	}
    

	std::cout << std::endl << "=== Test 3: More Brain tests (edge cases) ===" << std::endl << std::endl;
	Dog* myDog = new Dog();

	for (int i = 0; i < 5; i++)
	{
		std::stringstream ss;
		ss << "Idea #" << i << " from myDog";
		myDog->setIdea(i, ss.str());
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << "myDog Brain[" << i << "]: " 
				  << myDog->getIdea(i) << std::endl;
	}

	std::cout << "\n--- Testing out-of-range indices ---" << std::endl;
	myDog->setIdea(-1, "Should not be set");
	myDog->setIdea(101, "Should not be set");
	std::cout << "myDog Brain[-1]: " << myDog->getIdea(-1) << std::endl;
	std::cout << "myDog Brain[101]: " << myDog->getIdea(101) << std::endl;

	delete myDog;

	std::cout << std::endl << "=== Test 4: Deep Copy Test with Dog ===" << std::endl << std::endl;

	Dog dog1;
	dog1.setIdea(0, "I want a bone.");
	dog1.setIdea(1, "I want to play ball.");

	std::cout << "--- Using copy constructor ---" << std::endl;
	Dog dog2(dog1);

	std::cout << "dog1 Brain[0]: " << dog1.getIdea(0) << std::endl;
	std::cout << "dog2 Brain[0]: " << dog2.getIdea(0) << std::endl;

	std::cout << "--- Modify dog2's Brain ---" << std::endl;
	dog2.setIdea(0, "I want to sleep.");
	std::cout << "After modifying dog2's brain[0]..." << std::endl;
	std::cout << "dog1 Brain[0]: " << dog1.getIdea(0) << std::endl;
	std::cout << "dog2 Brain[0]: " << dog2.getIdea(0) << std::endl;

	std::cout << "--- Using copy assignment operator ---" << std::endl;
	Dog dog3;
	dog3 = dog1;
	std::cout << "dog3 Brain[0]: " << dog3.getIdea(0) << std::endl;
	
}
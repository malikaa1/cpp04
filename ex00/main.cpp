#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound(); 
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	const WrongAnimal *animal = new WrongAnimal();
	const WrongCat *cat = new WrongCat();
	std::cout << cat->getType() << std::endl;
	std::cout << animal->getType() << std::endl;
	animal->makeSound();
	cat->makeSound();
	cat->WrongAnimal::makeSound();
	delete animal;
	delete cat;
}
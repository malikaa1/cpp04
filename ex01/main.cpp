#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal *animl[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i < 10 / 2)
			animl[i] = new Cat();
		else
			animl[i] = new Dog();
		std::cout << "TAB[" << i << "] = " << animl[i]->getType() << std::endl;
	}
	for (i = 0; i < 10; i++)
	{
		std::cout << "TAB[" << i << "]";
		delete animl[i];
	}

	std::cout << "---------------test copy constructor---------------"<< std::endl; 
	Cat cat;

	cat.getBrain()->ideas[0] = "salut";
	cat.getBrain()->ideas[1] = "cava";
	cat.getBrain()->ideas[2] = "hello";

	std::cout << cat.getBrain()->ideas[0] << std::endl;
	std::cout << cat.getBrain()->ideas[1] << std::endl;
	std::cout << cat.getBrain()->ideas[2] << std::endl;
	Cat cat2(cat);

	std::cout << cat2.getBrain()->ideas[0] << std::endl;
	std::cout << cat2.getBrain()->ideas[1] << std::endl;
	std::cout << cat2.getBrain()->ideas[2] << std::endl;
	cat2.getBrain()->ideas[0] = "s";
	cat2.getBrain()->ideas[1] = "c";
	cat2.getBrain()->ideas[2] = "h";
	std::cout << cat2.getBrain()->ideas[0] << std::endl;
	std::cout << cat2.getBrain()->ideas[1] << std::endl;
	std::cout << cat2.getBrain()->ideas[2] << std::endl;
 
		Dog d;
		{
		Dog tmp = d;
		}

		Cat s;
		{
		Cat tmp = s;
		}
	std::cout << "-------test base class destructor-------------"<< std::endl; 
	Animal* a = new Cat();
	delete a;


}
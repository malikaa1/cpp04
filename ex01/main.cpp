#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(){
	Animal *animl[10];
	int i;

	for(i = 0; i < 10; i++)
	{
		if (i < 10 / 2)
			animl[i] = new Cat();
		else
			animl[i] = new Dog();
		std::cout<<"TAB["<<i<<"] = " << animl[i]->getType() << std::endl;
	}
	for(i = 0; i < 10; i++) {
		std::cout<<"TAB["<<i<<"]";
		delete animl[i];
	}


	Dog d;
	{
	Dog tmp = d;
	}


	Cat s;
	{
	Cat tmp = s;
	}
}
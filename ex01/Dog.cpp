#include "Dog.hpp"


Dog::Dog(void){
	std::cout << "dog default constructor called" << std::endl;
	this->type = "dog";
	this->brain = new Brain;

}

Dog::~Dog(void){
	std::cout << "Dog desstructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound(void) const {
	std::cout << "aaaaawwwww!!" << std::endl;
}

Dog::Dog( Dog const & src ) :Animal(src)
{
	std::cout << "dog Copy constructor called" << std::endl;
	this->type = src.type;
	Brain* b = new Brain;
	for (int i = 0; i < 100; i++)
	{
		b->ideas[i] = src.brain->ideas[i];
	}
	
	this->brain = b;
	return;
}

Dog &Dog::operator=(Dog const & dog){
	std::cout << "Dog  Assignement operator called" << std::endl;
	this->type = dog.getType();
	*(this->brain) = *(dog.getBrain());
	return *this;
}

Animal &Dog::operator=(Animal const & dog){
	std::cout << "animal dog Assignement operator called " << std::endl;
	this->type = dog.getType();
	*(this->brain) = *(dog.getBrain());
	return *this;
}
Brain *Dog::getBrain() const {
	return (this->brain);
}
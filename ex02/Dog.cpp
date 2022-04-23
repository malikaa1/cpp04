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
	this->type = src.getType();
	Brain* b = new Brain(*src.brain);
	this->brain = b;
	return;
}

Dog &Dog::operator=(Dog const & dog){
	std::cout << "Dog  Assignement operator called" << std::endl;
	this->type = dog.getType();
	Brain* b = new Brain(*dog.brain);
	this->brain = b;
	return *this;
}

Brain *Dog::getBrain() const {
	return (this->brain);
}


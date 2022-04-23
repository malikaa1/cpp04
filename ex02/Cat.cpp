#include "Cat.hpp"


Cat::Cat(void){
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "cat";
	this->brain = new Brain;
}

Cat::~Cat(void){
	delete this->brain;
	std::cout << "Cat desstructor called" << std::endl;
}
void Cat::makeSound(void) const{
	std::cout<< "miaaaaow ^^ !!"<<std::endl;
}

Cat::Cat( Cat const & src ): Animal(src){
	std::cout << "Cat Copy constructor called" << std::endl;
	this->type = src.getType();
	Brain* b = new Brain(*src.brain);
	this->brain = b;
	return;
}

Cat &Cat::operator=(Cat const & cat){
	std::cout << "cat  Assignement operator called" << std::endl;
	this->type = cat.getType();
	Brain* b = new Brain(*cat.brain);
	this->brain = b;
	return *this;
}

Brain *Cat::getBrain() const {
	return (this->brain);
}




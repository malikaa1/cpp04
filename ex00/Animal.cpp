#include "Animal.hpp"

 Animal::Animal(void){
     this->type = "";
     std::cout<<"animal defaut constructor called !!"<<std::endl;
 }
 Animal::Animal(std::string &type){
     this->type = type;
     std::cout<<"animal constructor called !!"<<std::endl;
 }
Animal::~Animal(void){
     std::cout<<"animal destructor called !!"<<std::endl;
}

const std::string &Animal::getType(void) const{
    return (this->type);
}

void Animal::makeSound(void) const{
        std::cout<< "hmmmmm (animal) !!"<<std::endl;
}

Animal &Animal::operator=(Animal const & a){
	std::cout << "Animal Assignement operator called" << std::endl;
	this->type = a.getType();
	return *this;
}

std::ostream	&operator<<(std::ostream &os, const Animal &a ){
	os << a.getType();;
	return os;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
	return;
}
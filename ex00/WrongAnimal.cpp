#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
	this->type = "";
	std::cout<<"WrongAnimal defaut constructor called !!"<<std::endl;
}
WrongAnimal::WrongAnimal(std::string &type){
	this->type = type;
	std::cout<<"WrongAnimal constructor called !!"<<std::endl;
}
WrongAnimal::~WrongAnimal(void){
	std::cout<<"WrongAnimal destructor called !!"<<std::endl;
}

const std::string &WrongAnimal::getType(void) const{
	return (this->type);
}

void WrongAnimal::makeSound(void) const{
	std::cout<< "animal......."<<std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const & a){
	std::cout << "WrongAnimal Assignement operator called" << std::endl;
	this->type = a.getType();
	return *this;
}

std::ostream	&operator<<(std::ostream &os, const WrongAnimal &a ){
	os << a.getType();;
	return os;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = src;
	return;
}
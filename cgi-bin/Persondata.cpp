#include "Persondata.h"


Persondata::Persondata(std::string name, std::string email) : name(name), email(email) {}

Persondata::~Persondata() {}

std::string Persondata::getName(){
	return name;
}

std::string Persondata::getEmail(){
	return email;
}
#include "Persondata.h"


Persondata::Persondata(std::string name, std::string email) : name(name), email(email) {}

Persondata::~Persondata() {}

json Persondata::getJson(){
	json j;
	j["name"] = name;
	j["email"] = email;
	return j;
}
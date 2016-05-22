#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>
#include "json.hpp"
using json = nlohmann::json;

class Persondata{
private:
	std::string name;
	std::string email;
public:
	Persondata(std::string name, std::string email);
	virtual ~Persondata();
	json getJson();
	std::string getName();
	std::string getEmail();
};
#endif //PERSONDATA_H
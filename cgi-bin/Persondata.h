#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>

class Persondata{
private:
	std::string name;
	std::string email;
public:
	Persondata(std::string name, std::string email);
	virtual ~Persondata();
	std::string getName();
	std::string getEmail();
};
#endif //PERSONDATA_H
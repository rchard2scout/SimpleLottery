#include <iostream>
#include <cgicc/Cgicc.h>

#include "Persondata.h"
 
int main ()
{   
  cgicc::Cgicc cgi;
  std::string name = cgi.getElement("name")->getValue();
  std::string email = cgi.getElement("email")->getValue();
  Persondata p(name, email);
  std::cout << p.getJson();
  return 0;
}
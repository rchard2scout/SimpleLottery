#include <iostream>
#include <cgicc/Cgicc.h>

#include "Persondata.h"
#include "Database.h"
#include "HtmlDisplayer.h"
 
int main ()
{   
  cgicc::Cgicc cgi;
  std::string name = cgi.getElement("name")->getValue();
  std::string email = cgi.getElement("email")->getValue();
  Persondata *p = new Persondata(name, email);
  Database db("lottery.db");
  db.add(p);
  HtmlDisplayer html;
  html.showConfirmation(p);

  return 0;
}
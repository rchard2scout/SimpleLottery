#include <iostream>

#include "Persondata.h"
#include "Database.h"
#include "HtmlDisplayer.h"
 
int main ()
{   
  Database db("lottery.db");
  Persondata* p = db.getRandom();
  HtmlDisplayer html;
  html.showWinner(p);

  return 0;
}
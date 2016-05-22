#include "HtmlDisplayer.h"
#include <iostream>

HtmlDisplayer::HtmlDisplayer(){

}

HtmlDisplayer::~HtmlDisplayer(){}

void HtmlDisplayer::showConfirmation(Persondata* p){
	showHeader("Succesfully submitted!");
	showPerson(p);
  	showFooter();
}

void HtmlDisplayer::showWinner(Persondata* p){
	showHeader("Winner!");
	showPerson(p);
  	showFooter();
}

void HtmlDisplayer::showHeader(std::string title){
	std::cout << "<!DOCTYPE html> \
				<html lang=\"en\"> \
				<head> \
				  <title>" << title << "</title> \
				  <meta charset=\"utf-8\"> \
				  <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\"> \
				  <link rel=\"stylesheet\" href=\"http://maxcdn.bootstrapcdn.com/bootstrap/3.3.6/css/bootstrap.min.css\"> \
				  <link rel=\"stylesheet\" href=\"../style.css\"> \
				  <script src=\"https://ajax.googleapis.com/ajax/libs/jquery/1.12.2/jquery.min.js\"></script> \
				  <script src=\"http://maxcdn.bootstrapcdn.com/bootstrap/3.3.6/js/bootstrap.min.js\"></script> \
				</head> \
				<body> \
				<div class=\"container\"> \
  				<h2>" << title << "</h2>" << std::endl;
}

void HtmlDisplayer::showFooter(){
	std::cout << "</div> \
				</body> \
				</html>" << std::endl;
}

void HtmlDisplayer::showPerson(Persondata* p){
	std::cout << "<ul class=\"list-group\"> \
    			<li class=\"list-group-item\"> \
    			Name: " << p->getName() << "\
    			</li> \
    			<li class=\"list-group-item\"> \
    			Email: " << p->getEmail() << "\
    			</li> \
  				</ul>" << std::endl;
}

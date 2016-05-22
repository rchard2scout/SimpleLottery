#ifndef HTMLDISPLAYER_H
#define HTMLDISPLAYER_H

#include "Persondata.h"

class HtmlDisplayer{
public:
	HtmlDisplayer();
	virtual ~HtmlDisplayer();
	void showConfirmation(Persondata* p);
	void showWinner(Persondata *p);
private:
	void showHeader(std::string title);
	void showFooter();
	void showPerson(Persondata* p);
};

#endif //HTMLDISPLAYER_H
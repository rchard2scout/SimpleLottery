all:
	g++ -Wall cgi-bin/*.cpp -c -std=c++11
	g++ -Wall Persondata.o Database.o HtmlDisplayer.o submit.o -o cgi-bin/submit.cgi -std=c++11 -l cgicc -l sqlite3
	g++ -Wall Persondata.o Database.o HtmlDisplayer.o draw.o -o cgi-bin/draw.cgi -std=c++11 -l sqlite3
	rm *.o

clean:
	rm -f cgi-bin/*.cgi cgi-bin/*.o

deploy:
	cp cgi-bin/*.cgi /var/www/cgi-bin/
	cp web/* /var/www/

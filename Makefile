all:
	g++ -Wall cgi-bin/*.cpp -o cgi-bin/main.cgi -std=c++11 -l cgicc -l sqlite3

clean:
	rm -f cgi-bin/main.cgi

deploy:
	cp cgi-bin/main.cgi /var/www/cgi-bin/main.cgi
	cp web/* /var/www/
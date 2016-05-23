# Simple Lottery
This is a simple lottery web application.

This code has been created as a test assignment. It is not meant for public
release, but of course you're free to do whatever you want with this. (Also see
[the license](LICENSE))

What is in here:
 - adding participants
 - persistent participant storage
 - confirmation page
 - picking a winner

What is not in here:
 - removing participants
 - SQL injection prevention (or any other kind of security)
 - error checking

To build and run this, you'll need:
 - sqlite3
 - cgicc
 - lighttpd (or another webserver) with cgi enabled.
 - an sqlite database called "lottery.db" in /var/www/cgi-bin/ that's writable
   by lighttpd (on Debian-based distributions: user www-data)

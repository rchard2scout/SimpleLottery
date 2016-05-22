# Simple Lottery
This is a simple lottery web application.

This code has been created for a test assignment for Bynder. It is not meant
for public release.

What is in here:
 - adding participants
 - confirmation page
 - picking a winner

What is not in here:
 - removing participants
 - SQL injection prevention
 - Error checking

To build and run this, you'll need:
 - sqlite3
 - cgicc
 - lighttpd (or another webserver) with cgi enabled.
 - an sqlite database called "lottery.db" in /var/www/cgi-bin/ that's writable
   by lighttpd (on Debian-based distributions: user www-data)

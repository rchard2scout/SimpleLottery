#include "Database.h"
#include <iostream>
#include <sstream>

Database::Database(std::string filename){
	sqlite3_open(filename.c_str(), &db);
}

Database::~Database(){
	sqlite3_close(db);
}

void Database::add(Persondata* p){
	std::stringstream sql;
	sql << "INSERT INTO participants VALUES (NULL, '" << p->getName() << "', '" << p->getEmail() << "');";
	char *zErrMsg = 0;
	int rc = sqlite3_exec(db, sql.str().c_str(), 0, 0, &zErrMsg);
	if(rc != SQLITE_OK){
		std::cout << "SQL Error! " << zErrMsg << std::endl;
	}
}

Persondata* Database::getRandom(){
	sqlite3_stmt *stmt;
	const char *sql = "SELECT * FROM participants ORDER BY RANDOM() LIMIT 1;";
	int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL); //compile the statement 
	if (rc != SQLITE_OK) {
	    std::cout<< "SQL Error!" << sqlite3_errmsg(db) << std::endl;
	    return nullptr;
	}
	rc = sqlite3_step(stmt); //execute the statement
	std::string name = std::string(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1)));
	std::string email = std::string(reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2)));
	sqlite3_finalize(stmt); //throw away the prepared statement
	return new Persondata(name, email); 
}

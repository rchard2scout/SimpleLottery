#ifndef DATABASE_H
#define DATABASE_H
#include <string>
#include <sqlite3.h>

#include "Persondata.h"

class Database {
private:
	sqlite3 *db;
public:
	Database(std::string filename);
	virtual ~Database();
	void add(Persondata* p);
	Persondata* getRandom();
};
#endif //DATABASE_H
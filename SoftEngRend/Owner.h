#ifndef OWNER_H
#define OWNER_H

#include <string>
#include "Store.h"
#include "Report.h"

using namespace std;

class Owner
{

public:
	Owner(int, const Store&, const string&, const string&, const string&);
	~Owner();
	void setPassword(const string&);
	string getPassword() const;

private:
	int ID;
	const Store katStore;
	string password;
	string username;
	string usReport;
};

#endif // OWNER_H

#ifndef OWNER_H
#define OWNER_H

#include <string>
#include "Report.h"
#include "stdafx.h"
#include <iostream>

class Store;
using namespace std;

class Owner
{

public:
	Owner(int,  Store*,  string&,  string&,  string&);
	~Owner();
	void setPassword( string&);
	string getPassword() const;

private:
	int ID;
	Store *store;
	string password;
	string username;
	string usReport;
};

#endif // OWNER_H

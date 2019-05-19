#ifndef OWNER_H
#define OWNER_H

#include <string>
#include "Store.h"
#include "Report.h"
#include "stdafx.h"
#include <iostream>

using namespace std;

class Owner
{

public:
	Owner(int,  Store&,  string&,  string&,  string&);
	~Owner();
	void setPassword( string&);
	string getPassword() ;

private:
	int ID;
	Store katStore;
	string password;
	string username;
	string usReport;
};

#endif // OWNER_H

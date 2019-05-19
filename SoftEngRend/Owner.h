#pragma once

#include "Store.h"
#include <string>
using namespace std;

class Owner
{
private:
	static int ID;				
	string password;
	string username;
	Store *store;

public:
	Owner(string username, string password);

	~Owner();

	string getPassword();

	void setPassword(string pass);
};



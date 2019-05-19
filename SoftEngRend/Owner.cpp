#include "stdafx.h"
#include "Owner.h"


Owner::Owner(string username, string password)
{
	/*this->ID = ID;							1 counter for all ? like we should with users*/
	this->password = password;
	this->username = username;
}


Owner::~Owner()
{
}

string Owner::getPassword()
{
	return string(password);
}

void Owner::setPassword(string pass)
{
	this->password = pass;
}


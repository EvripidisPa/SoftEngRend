#include "Owner.h"
#include "stdafx.h"

using namespace std;

Owner::Owner(int ownID,  Store &Store,  string& Pass,  string& name,  string& report)
{
	ID = ownID;
	katStore = Store;
	setPassword(Pass);
	username = name;
	usReport = report;
}
Owner::~Owner()
{
	cout << "Owner gone...\n";
}

void Owner::setPassword( string& Pass)
{
	password = Pass;
}

string Owner::getPassword() 
{
	return password;
}

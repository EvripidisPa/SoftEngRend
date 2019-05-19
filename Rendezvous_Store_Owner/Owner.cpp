#include <iostream>
#include "Owner.h"
#include <string>
#include "Store.h"

using namespace std;

Owner::Owner(int ownID,const Store &Store, const string &Pass, const string &name, const string &report)
{
    ID = ownID;
    katStore = Store;
    setPassword(Pass);
    username = name;
    usReport = report;
}
Owner::~Owner()
{
    cout<<"Owner gone...\n";
}

void Owner::setPassword( const string &Pass )
{
    password = Pass;
}

string Owner::getPassword() const
{
    return password;
}

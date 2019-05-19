#include <iostream>
#include "stdafx.h"
#include "Events.h"

Events::Events( string& katInfo,  string& katTitle,  DateTime& DT,  Status St,  Store& Sto)
{
	setTitle(katTitle);
	setInfo(katInfo);
	setDate(DT);
	setStatus(St);
	setStore(Sto);
}
Events::~Events()
{
	std::cout << "events gone...\n";
}

void Events::setInfo( string& katInfo)
{
	Info = katInfo;
}
void Events::setTitle( string& katTitle)
{
	Title = katTitle;
}
void Events::setDate( DateTime& DT)
{
	date = DT;
}
void Events::setStatus( Status St)
{
	status = St;
}
void Events::setStore( Store& Sto)
{
	store = Sto;
}

 string Events::getInfo() 
{
	return Info;
}

 string Events::getTitle() 
{
	return Title;
}

 DateTime Events::setDate() 
{
	return date;
}

Status Events::getStatus() 
{
	return status;
}

 Store Events::getStore 
{
	return store;
}



 DateTime Events::getDate() 
{
	return date;
}







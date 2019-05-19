#include <iostream>
#include <string>
#include "stdafx.h"
#include "Events.h"

Events::Events(const string& katInfo, const string& katTitle, DateTime& DT, Status St, Store& Sto)
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

void Events::setInfo(const string&) const
{
	Info = katInfo;
}
void Events::setTitle(const string&) const
{
	Title = katTitle;
}
void Events::setDate(DateTime&) const
{
	date = DT;
}
void Events::setStatus(Status) const
{
	status = St;
}
void Events::setStore(Store&) const
{
	store = Sto;
}

const string Events::getInfo()
{
	return Info;
}

const string Events::getTitle()
{
	return Title;
}

const DateTime Events::setDate()
{
	return date;
}

Status Events::getStatus()
{
	return status;
}

const Store Events::getStore
{
	return store;
}



const DateTime Events::getDate()
{
	return date;
}







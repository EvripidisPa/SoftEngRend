#ifndef EVENTS_H
#define EVENTS_H
#include "Store.h"
#include "DateTime.h"
#include <string>

class Events
{
	enum Status
	{
		OPEN, CLOSED
	};
public:
	Events(const string&, const string&, DateTime&, Status, Store&);
	~Events();
	void setInfo(const string&) const;
	void setTitle(const string&) const;
	void setDate(DateTime&) const;
	void setStatus(Status) const;
	void setStore(Store&) const;

	const string getInfo();
	const string getTitle();
	const DateTime getDate();
	Status getStatus();
	const Store getStore();

private:
	string Info;
	string Title;
	DateTime date;
	Status status;
	Store store;

};

#endif // EVENTS_H

#ifndef EVENTS_H
#define EVENTS_H
#include "our_structs.h"
#include <string>
using std::string;
class Store;

class Events
{
	enum Status
	{
		OPEN, CLOSED
	};
public:
	Events( string&,  string&, DateTime&, Status, Store*);
	~Events();
	void setInfo( string&);
	void setTitle( string&);
	void setDate(DateTime&);
	void setStatus(Status);
	void setStore(Store*);

	string getInfo() const;
	string getTitle() const;
	DateTime getDate() const;
	Status getStatus() const;

private:
	 string Info;
	 string Title;
	 DateTime date;
	 Status status;
	 Store* store;

};

#endif // EVENTS_H

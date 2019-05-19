#ifndef EVENTS_H
#define EVENTS_H
#include "Store.h"
#include "our_structs.h"
#include <string>

class Events
{
	enum Status
	{
		OPEN, CLOSED
	};
public:
	Events( string&,  string&, DateTime&, Status, Store&);
	~Events();
	void setInfo( string&);
	void setTitle( string&);
	void setDate(DateTime&);
	void setStatus(Status);
	void setStore(Store&);

	 string getInfo() ;
	 string getTitle() ;
	 DateTime getDate() ;
	Status getStatus() ;
	 Store getStore() ;

private:
	 string Info;
	 string Title;
	 DateTime *date;
	 Status status;
	 Store* store;

};

#endif // EVENTS_H

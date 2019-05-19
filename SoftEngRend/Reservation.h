#ifndef RESERVATION_H
#define RESERVATION_H

#include "User.h"
#include "Store.h"

class Reservation
{
private:

//	Date Date_Reserv;
	int numOfPeople;
	int numOfParking;
	enum status { Pending = 0, Accepted = 1, Completed = 2 };
	User* user;
	Store* store;

public:
//	Reservation(DateTime datetime, int numOfPeople, int numOfPark, Store store, User users);

	virtual ~Reservation();

	Reservation getReservation();

	void updateReservation();

	void deleteReservation();

//	Date getDateTime();

//	void setDateTime(Date DateTime);

	User getUser();

	void setUser(User User);

	Store getStore();

	void setStore(Store Store);

	int getNumOfPeople();

	void setNumOfPeople(int numOfPeople);

	int getNumOfParking();

	void setNumOfParking(int numOfParking);

	void setStatus(enum status);
};

#endif
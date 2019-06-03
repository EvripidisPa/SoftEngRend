#include "stdafx.h"
#include "Reservation.h"
#include "our_structs.h"
enum status { Pending = 0, Accepted = 1, Completed = 2 };

Reservation::Reservation(DateTime datetime, int numOfPple, int numOfPark, Store str, User users)
	:Date_Reserv(datetime),numOfPeople(numOfPple),numOfParking(numOfPark),store(&str),user(users)
{
}

Reservation::~Reservation()
{
}

Reservation Reservation::getReservation()
{
	return *this;
}

void Reservation::updateReservation()
{
	// TODO - implement Reservation::updateReservation
	throw "Not yet implemented";
}

void Reservation::deleteReservation()
{
	delete this;
}

DateTime Reservation::getDateTime()
{
	return Date_Reserv;
}

void Reservation::setDateTime(DateTime DTime)
{
	Date_Reserv.sec= DTime.sec;  
	Date_Reserv.min= DTime.min;  
	Date_Reserv.hour= DTime.hour;  
	Date_Reserv.day= DTime.day;  
	Date_Reserv.mon= DTime.mon;  
	Date_Reserv.year= DTime.year;  
}

User& Reservation::getUser()
{
	return *user;
}

void Reservation::setUser(User User)
{
	user = &User;
}

Store Reservation::getStore()
{
	return *store;
}

void Reservation::setStore(Store Store)
{
	store = &Store;
}

int Reservation::getNumOfPeople()
{
	return this->numOfPeople;
}

void Reservation::setNumOfPeople(int numOfPeople)
{
	this->numOfPeople = numOfPeople;
}

int Reservation::getNumOfParking()
{
	return this->numOfParking;
}

void Reservation::setNumOfParking(int numOfParking)
{
	this->numOfParking = numOfParking;
}

void setStatus(enum status status) 
{
	sts = status;
}
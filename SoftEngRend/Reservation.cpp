#include "stdafx.h"
#include "Reservation.h"


Reservation::Reservation(DateTime datetime, int numOfPeople, int numOfPark, Store store, User users)
{
}

Reservation::~Reservation()
{
}

void Reservation::updateReservation()
{
	// TODO - implement Reservation::updateReservation
	throw "Not yet implemented";
}

void Reservation::deleteReservation()
{

}

Date Reservation::getDateTime()
{
	return Date();
}

void Reservation::setDateTime(Date DateTime)
{
	// TODO - implement Reservation::setDateTime
	throw "Not yet implemented";
}

User Reservation::getUser()
{
	// TODO - Check Reservation::getUser
	// IS IT REALLY NECESSARY SINCE WE HAVE THE ID?? 2**
	return User();
}

void Reservation::setUser(User User)
{
	// TODO - implement Reservation::setUser
	// IS IT REALLY NECESSARY SINCE WE HAVE THE ID?? 2**
	throw "Not yet implemented";
}

Store Reservation::getStore()
{
	// TODO - check Reservation::getStore
	// IS IT REALLY NECESSARY SINCE WE HAVE THE ID?? 2**
	throw "Not yet implemented";
	return Store();
}

void Reservation::setStore(Store Store)
{
	// TODO - check Reservation::setStore
	// IS IT REALLY NECESSARY SINCE WE HAVE THE ID?? 2**
	throw "Not yet implemented";
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

void setStatus(enum status) {
	// TODO - implement Reservation::setStatus
	// Check Notation for enum 
};
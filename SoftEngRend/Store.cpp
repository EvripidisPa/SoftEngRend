#include "stdafx.h"
#include <iostream>
#include <string>
#include "Store.h"


using namespace std;

Store::Store(int I_D, string Name, double Latitude, double Longitude, Owner* OWN)
{
	ID = I_D;
	name = Name;
	latitude = Latitude;
	longitude = Longitude;
	if (owner != nullptr)
	{
		owner = OWN;
	}
}

Store::Store(int I_D, string Name, Owner* OWN)
{
	ID = I_D;
	name = Name;
	owner = OWN;
}

string Store::getBio() const { return bio; }
string Store::getName() const { return name; }
int Store::getID() const { return ID; }
double Store::getLat() const { return latitude; }
double Store::getLong() const { return longitude; }
int Store::getCapacity() const { return capacity; }
int Store::getCapacity_Park() const { return capacity_park; }
float Store::getRating() const { return rating; }


void Store::setBio(string& b) { b = bio; }
void Store::setName(string& n) { n=name; }
void Store::setLat(double lat) { lat = latitude; }
void Store::setLongitude(double longi) { longitude = longi; }
void Store::setCapacity(int cap) { capacity = cap; }
void Store::setCapacity_Park(int cap_park) { capacity_park = cap_park; }
void Store::setRating(float ra) { rating = ra; }

void Store::updateEvent(const Events& katEvent)
{
	Event.push_back(katEvent);
}
Events Store::getEvents(int e) const
{

	return Event.at(e);

}
void Store::deleteEvent()
{
	Event.clear();
}

void Store::setReservation(const string & katReserv)
{
	Reservation.push_back(katReserv);
	for (int i = 0; i < Reservation.size(); i++)
		cout << Reservation[i] << endl;
}
const string Store::getReservation(int r) const
{

	return Reservation.at(r);

}

void Store::updateMenu(const Menu & katMenu)
{
	menu.push_back(katMenu);
}

void Store::updatePhotos(const Photo & katPhoto)
{
	photos.push_back(katPhoto);
}
Photo Store::getPhotos(int p) const
{
	if (!photos.empty())
		return photos.at(p);
	else
		std::cout << "no photos...\n";
}

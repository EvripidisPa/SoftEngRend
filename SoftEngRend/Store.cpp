#include <iostream>
#include <string>
#include "Store.h"
#include "Owner.h"
#include "stdafx.h"

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
float Store; :getRating() const { return rating; }


void Store::setBio(string b) { b = bio; }
//void Store::getName(string n) { n=name; }
void Store::setLat(double lat) { lat = latitude; }
void Store::setLongitude(double long) { long = longitude; }
void Store::setCapacity(int cap) { cap = capacity; }
void Store::setCapacity_Park(int cap_park) { cap_park = capacity_park; }
void Store::setRating(float ra) { ra = rating; }

void Store::updateEvent(const Events& katEvent)
{
	Event.push_back(katEvent);
	for (int i = 0; i < Event.size(); i++)
		cout << Event[i].getEvents << '\n';
}
const Events Store::getEvents(int e) const
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
		cout << Reservation[i] << '\n';
}
const string Store::getReservation(int r) const
{

	return Reservation.at(r);

}

void Store::updateMenu(const Menu & katMenu)
{
	menu.push_back(katMenu);
	for (int i = 0; i < menu.size(); i++)
		cout << menu[i] << '\n';
}
void Store::deletemenu()
{
	menu.clear();
}

void Store::updatePhotos(const Photos & katPhoto);
{
	photos.push_back(katPhoto);
	for (int i = o; i < photos.size(); i++)
		cout << photos[i] << '\n';
}
const Photos Store::getPhotos(int p) const
{
	if (!photos.empty())
		return photos.at(p);
	else
		std::cout << "no photos...\n";
}


void Store::newmenu(const Menu & katMenu)
{
	menu.push_back(katMenu);
	for (int i = 0; i < Menu.size(); i++)
		cout << Menu[i] << '\n';
}
void MenuComp::deleteMenu()
{
	Menu.clear();
}

void Store::setHours(const DateTimeStruct & katHours)
{
	hours.push_back(katHours);
	for (int i = 0; i < hours.size(); i++)
		cout << hours[i] << '\n';
}
void Store::getHours()
{
	for (auto i = hours.begin(); i != hours.end(); ++i)
		std::cout << *i << ' ';
	cout << '\n';
}

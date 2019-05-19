#ifndef STORE_H
#define STORE_H

#include <string>
#include "Owner.h"
#include "our_structs.h"
#include "stdafx.h"
#include "Events.h"
#include "Photo.h"

using namespace std;

class Store
{
public:
	Store(int ID, string name, double latitude, double longitude, Owner* owner);
	Store(int ID, string name, Owner* owner);
	string getBio() const;
	string getName() const;
	int getID() const;
	double getLat() const;
	double getLong() const;
	int getCapacity() const;
	int getCapacity_Park() const;
	float getRating() const;

	void setBio(string bio);
	void setName(string name);
	void setLat(double latitude);
	void setLongitude(double longitude);
	void setCapacity(int capacity);
	void setCapacity_Park(int capacity_park);
	void setRating(float rating);

	void updateEvent(const Events&);
	const Events getEvents(int) const;
	void deleteEvent();

	void setReservation(const string&);
	const string getReservation(int) const;

	void updateMenu(const Menu&);
	void deletemenu();

	void updatePhotos(const Photos&);
	const Photos getPhotos(int) const;

	void Store::setHours(const DateTime& katHours);
	const DateTime Store::getHours() const;

private:
	string name, bio;
	int ID, capacity, capacity_park;
	double latitude, longitude;
	float rating;
	struct availability;
	enum status { OPEN, CLOSED };
	Owner* owner;

	std::vector<Events> Event;
	std::vector<string> Reservation;
	std::vector<Menu> menu;
	std::vector<Photos> photos;
	std::vector<DateTime> hours;
};


#endif // STORE_H

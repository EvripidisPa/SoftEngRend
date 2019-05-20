#ifndef STORE_H
#define STORE_H
#include <string>
#include <vector>
#include "Events.h" 
#include "Photo.h"
#include "Menu.h"
#include "MenuComp.h"

using namespace std;
class Owner;

class Store
{
public:
	Store(int ID, string, double latitude, double longitude, Owner* owner);
	Store(int ID, string name, Owner* owner);
	string getBio() const;
	string getName() const;
	int getID() const;
	double getLat() const;
	double getLong() const;
	int getCapacity() const;
	int getCapacity_Park() const;
	float getRating() const;

	void setBio(string&);
	void setName(string&);
	void setLat(double);
	void setLongitude(double);
	void setCapacity(int);
	void setCapacity_Park(int);
	void setRating(float);

	void updateEvent(const Events&);
	Events getEvents(int) const;
	void deleteEvent();

	void setReservation(const string&);
	const string getReservation(int) const;

	void updateMenu(const Menu&);

	void updatePhotos(const Photo&);
	Photo getPhotos(int) const;

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
	std::vector<Photo> photos;
	std::vector<DateTime> hours;
};

#endif // STORE_H

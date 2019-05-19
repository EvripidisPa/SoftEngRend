#ifndef STORE_H
#define STORE_H
#include <string>
#include "Owner.h"
#include "our_structs.h"
#include <vector>
using namespace std;

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
	//void setName
	void setLat(double);
	void setLongitude(double);
	void setCapacity(int);
	void setCapacity_Park(int);
	void setRating(float);

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

	/*struct DateTimeStruct
	{
		int sec;   // seconds of minutes from 0 to 61
		int min;   // minutes of hour from 0 to 59
		int hour;  // hours of day from 0 to 24
		int day;   // day of month from 1 to 31
		int mon;   // month of year from 0 to 11
		int year;  // year since 1900
	};*/


};



#endif // STORE_H

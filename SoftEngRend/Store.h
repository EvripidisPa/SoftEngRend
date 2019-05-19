#pragma once

#include <string>
#include "our_structs.h"
#include "Owner.h"
using namespace std;

class Store
{
private:
	string name, bio;
	int ID, capacity, capacity_park;
	double latitude, longitude;
	float rating;
	struct availability;
	enum status { OPEN = 0 , CLOSED = 1 };
	Owner *ptr_owner;

public:
	Store(int ID, string name, double latitude, double longitude, Owner *ptr_owner);

	Store(int ID, string name, Owner *ptr_owner);

	virtual ~Store();

	string getBio();

	string getName();

	int getID();

	double getLat();

	double getLong();

	int getCapacity();

	int getCapacity_Park();

	float getRating();

	//Setters
	void setBio(string bio);

	void setLat(double latitude);

	void setLongitude(double longitude);

	void setCapacity(int capacity);

	void setCapacity_Park(int capacity_park);

	void setRating(float rating);
};


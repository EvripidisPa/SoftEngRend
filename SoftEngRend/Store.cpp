#include "stdafx.h"
#include "Store.h"


Store::Store(int ID, string name, double latitude, double longitude, Owner * owner)
{
	this->ID = ID;
	this->name = name;
	this->latitude = latitude;
	this->longitude = longitude;

	if (owner != nullptr)
		this->ptr_owner = owner;
}

Store::Store(int ID, string name, Owner * owner)
{
	this->ID = ID;
	this->name = name;
	this->ptr_owner = owner;
}

Store::~Store()
{
}

string Store::getBio()
{
	return string(bio);
}

string Store::getName()
{
	return string(name);
}

int Store::getID()
{
	return ID;
}

double Store::getLat()
{
	return latitude;
}

double Store::getLong()
{
	return longitude;
}

int Store::getCapacity()
{
	return capacity;
}

int Store::getCapacity_Park()
{
	return capacity_park;
}

float Store::getRating()
{
	return rating;
}

void Store::setBio(string bio)
{
	this->bio = bio;
}

void Store::setLat(double latitude)
{
	this->latitude = latitude;
}

void Store::setLongitude(double longitude)
{
	this->longitude = longitude;
}

void Store::setCapacity(int capacity)
{
	this->capacity = capacity;
}

void Store::setCapacity_Park(int capacity_park)
{
	this->capacity_park = capacity_park;
}

void Store::setRating(float rating)
{
	this->rating = rating;
}

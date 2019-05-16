#include <iostream>
#include <ctime>

using namespace std;

class Owner;

class Store {
private:
	string name, bio;
	int ID, capacity, capacity_park;
	double latitude, longitude;
	float rating;
	struct availability;
	enum status { OPEN, CLOSED };
	Owner * owner;

	struct DateTimeStruct
	{
		int sec;   // seconds of minutes from 0 to 61
		int min;   // minutes of hour from 0 to 59
		int hour;  // hours of day from 0 to 24
		int day;   // day of month from 1 to 31
		int mon;   // month of year from 0 to 11
		int year;  // year since 1900
	};

public:
	//----------Constructors----------
	Store(int ID, string name, double latitude, double longitude, Owner *owner)
	{
		this->ID = ID;
		this->name = name;
		this->latitude = latitude;
		this->longitude = longitude;

		if ( owner != nullptr)
		this->owner = owner;
	}

	Store(int ID, string name, Owner *owner)
	{
		this->ID = ID;
		this->name = name;
		this->owner = owner;
	}

	//----------Methods----------

	//Getters
	string getBio() { return bio; }
	string getName() { return name; }
	int getID() { return ID; }
	double getLat() { return latitude; }
	double getLong() { return longitude; }
	int getCapacity() { return capacity; }
	int getCapacity_Park() { return capacity_park; }
	float getRating() { return rating; }

	//Setters
	void setBio(string bio) { this->bio = bio; }
	void setLat(double latitude) { this->latitude = latitude; }
	void setLongitude(double longitude) { this->longitude = longitude; }
	void setCapacity(int capacity) { this->capacity = capacity; }
	void setCapacity_Park(int capacity_park) { this->capacity_park = capacity_park; }
	void setRating(float rating) { this->rating = rating; }
};

class Owner {
private:
	int ID;
	string password, username;
	Store* store;

public:
	//----------Constructors----------
	Owner(int ID, string password, string username)
	{
		this->ID = ID;
		this->password = password;
		this->username = username;
	}

	//----------Methods----------

	//Getters
	string getPassword(){ return password; }

	//Setters
	void setPassword(string pass) { password = pass; }
};

class Photo {
private:
	int PhID, position;
	Store* store;

public:
	//----------Constructors----------
	Photo(int PhID, int position, Store store)
	{
		this->PhID = PhID;
		this->position = position;
		this->store = &store;
	}

	//----------Methods----------
	void updatePhoto(){}

	void deletePhoto() { delete this; }

	//Getters
	int getPosition() { return position; }

	//Setters
	void setPosition(int pos) { position = pos; }
};

class Menu {
private:
	Store* store;
public:
	void newMenu(){}	//??
	void deleteMenu() { delete this; }	//??
	void updateMenu(){}	//??
};

class MenuComp {
private:
	string title, info;
	float price;
	Menu* menu;
public:
	//----------Constructors----------
	MenuComp(string title, float price, Menu menu)
	{
		this->title = title;
		this->price = price;
		this->menu = &menu;
	}

	//----------Methods----------
	void newMenuComp(){}	//??
	void deleteMenu() { delete this; }	//??
	//Getters
	string getTitle() { return title;}
	string getInfo() { return info; }
	float getPrice() { return price; }

	//Setters
	void setTtile(string x) { title = x; }
	void setInfo(string x) { info = x; }
	void setPrice(float p) { price = p; }
};

class Events {
private:
	string info, title;
	enum status{ Upcoming, Running };
	status my_status;
	Store* store;
public:
	//----------Constructors----------
	Events(string title, string info, Store *store)
	{
		this->info = info;
		this->title = title;
		this->store = store;
		this->my_status = Upcoming;
	}

	//----------Methods----------

	//Getters
	string getInfo() { return info; }
	string getTitle() { return title; }
	Store getStore() { return *store; }
	int getStatus() { return my_status; }

	//Setters
	void setInfo(string x) { info = x; }
	void setTitle(string x) { title = x; }
	void setStore(Store* s) { store = s; }
	void setStatus(status s);
};

int main()
{
	return 0;
}
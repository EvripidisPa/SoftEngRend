#pragma once
#include "Store.h"

class Photo
{
private:
	int PhID, position;
	Store* store;

public:
	//----------Constructors----------
	Photo(int PhID, int position, Store store);

	Photo();
	
	virtual ~Photo();

	//----------Methods----------
	void updatePhoto() {}

	void deletePhoto() { delete this; }

	//Getters
	int getPosition() { return position; }

	//Setters
	void setPosition(int pos) { position = pos; }

};


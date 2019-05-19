#include "stdafx.h"
#include "Photo.h"


Photo::Photo(int PhID, int position, Store store)
{
		this->PhID = PhID;
		this->position = position;
		this->store = &store;
}

Photo::Photo()
{
}


Photo::~Photo()
{
}

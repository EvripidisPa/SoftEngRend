#include "stdafx.h"
#include "Photo.h"


Photo::Photo(int phid, int pos, Store* Store)
{
	PhID = phid;
	position = pos;
	store = Store;
}

Photo::Photo()
{
}


Photo::~Photo()
{
}

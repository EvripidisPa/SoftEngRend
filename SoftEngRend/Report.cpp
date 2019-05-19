#include "stdafx.h"
#include "Report.h"

Report::Report(int direction, string r_text, float r_rating, User* user, Store* store)
	: text(r_text), rating(0), rep_user(nullptr) 
{
	if (direction == 0) {
		rating = r_rating;
		rep_store = store;
		rep_store->setRating(rating);
	}
	else {
		rep_user = user;
	}
}

Report::~Report()
{
}

void Report::setText(string r_text)
{
	text = r_text;
}

void Report::setRating(float r_rating)
{
	rating = r_rating;
}

string Report::getText()
{
	return string(text);
}

float Report::getRating()
{
	return rating;
}

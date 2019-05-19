#pragma once
#include "Store.h"
#include "User.h"
#include "Owner.h"
#include <string>


class Report
{
private:
	string text;
	float rating;
	enum direction{ usr_to_store= 0, ownr_to_usr = 1};
	User* rep_user;
	Owner* rep_owner;
	Store* rep_store;
public:
	Report(int direction, string r_text, float r_rating, User* user, Store* store);
	~Report();

	void setText(string r_text);
	void setRating(float r_rating);
	
	string getText();
	float getRating();
};


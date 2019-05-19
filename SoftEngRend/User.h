#ifndef USER_H
#define USER_H

#include <string>
//#include "Report.h"
using namespace std;

class User
{

private:
	static int ID;
	string firstname;
	string lastname;
	string email;
	string password;
	string phone;
	float rating;

	enum usr_status
	{
		free = 0,
		premium = 1
	};

//	Report reports[];

public:
	User();
	virtual ~User();

	int getID();

	void setID(static int ID);

	string getFirstname();

	void setFirstname(string firstname);

	string getLastname();

	void setLastname(string lastname);

	string getEmail();

	void setEmail(string email);

	string getPassword();

	void setPassword(string password);

	string getPhone();

	void setPhone(string phone);

	float getRating();

	void setRating(float rating);

	int getStatus();

	void setStatus(int status);

	void getPremium();
};

#endif


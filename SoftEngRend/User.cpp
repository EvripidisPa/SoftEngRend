#include "stdafx.h"
#include "User.h"
#include <iostream>
#include <cstdlib>

User::User()
{
	// TODO - implement User::User
	throw "Not yet implemented";
}


User::~User()
{
}

int User::getID() {
	// TODO - implement User::getID
	return ID;
}

void User::setID(int ID)
{
}

string User::getFirstname() {
	return this->firstname;
}

void User::setFirstname(string firstname) {
	this->firstname = firstname;
}

string User::getLastname() {
	return this->lastname;
}

void User::setLastname(string lastname) {
	this->lastname = lastname;
}

string User::getEmail() {
	return this->email;
}

void User::setEmail(string email) {
	this->email = email;
}

string User::getPassword() {
	return this->password;
}

void User::setPassword(string password) {
	this->password = password;
}

string User::getPhone() {
	return this->phone;
}

void User::setPhone(string phone) {
	this->phone = phone;
}

float User::getRating() {
	return this->rating;
}

void User::setRating(float rating) {
	this->rating = rating;
}

int User::getStatus() {
//	return usr_status;
	return 0;
}

void User::setStatus(int status) {
//	this->usr_status = status;
}

void User::getPremium() {
	// TODO - implement User::getPremium
	throw "Not yet implemented";
}
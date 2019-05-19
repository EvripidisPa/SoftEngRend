#pragma once

struct DateTime
{
	int sec;   // seconds of minutes from 0 to 61
	int min;   // minutes of hour from 0 to 59
	int hour;  // hours of day from 0 to 24
	int day;   // day of month from 1 to 31
	int mon;   // month of year from 0 to 11
	int year;  // year since 1900
};

struct Availability
{
	int numPeople;
	int numParking;
	struct DateTime;

};
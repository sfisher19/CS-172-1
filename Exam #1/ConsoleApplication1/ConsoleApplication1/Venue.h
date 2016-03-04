//Shaun Fisher
//03-03-2016
//EXAM #1
//CS 172-1
//I affirm that all code given below was written solely by me, Shaun Fisher,
//and that any help I received adhered to the rules stated for this exam. 
#include <iostream>
#include <string>
#include "Event.h"
#ifndef VENUE_H_//Inclusion Guard
#define VENUE_H_
using namespace std;


class Venue
{
public:
	int numEvents;
	Event scheduledEvents[11];//Can hold up to a maximum of 12 events (0-11)
	bool validTime(int time);//Make sure time is available
	void addEvent(int time, string name);//Add an event to the book
	Event findEvent(int time);//Locate an event time
	Event findEvent(string name);//Locate an event name
	
};
#endif

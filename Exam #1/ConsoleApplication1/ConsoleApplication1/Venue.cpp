//Shaun Fisher
//03-03-2016
//EXAM #1
//CS 172-1
//I affirm that all code given below was written solely by me, Shaun Fisher,
//and that any help I received adhered to the rules stated for this exam.

#include <iostream>
#include <string>
#include "Venue.h"
#include "Event.h"
using namespace std;

bool Venue::validTime(int time)//Figure out whether an event has the same time as one already scheduled
{
	//I know that I have to make sure that times do not conflict
	//So I must set a boolean variable to see if the time input and
	//Previous times conflict. If they do not equal each other, the
	//boolean value will return 0.  If it is equal to another time
	//on the schedule, then the program will cout
	cout << "Couldn't schedule event :( " << endl;
}

void Venue::addEvent(int time, string name)
{
	Event setTime(int time);//Take time and store in event
	Event setTitle(string name);//Take name and store in event
	int i = 0;
		scheduledEvents[i];
		i++;//Increment i to get the next event in the next slot in the array
		cout << "Event Scheduled!" << endl;
}

Event Venue::findEvent(int time)//Locate event and pull up the time
{
	int getTime(time);
	return time;
}

Event Venue::findEvent(string name)//Locate event and pull up the name
{
	string getTitle(name);
	return name;
}
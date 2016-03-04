//Shaun Fisher
//03-03-2016
//EXAM #1
//CS 172-1
//I affirm that all code given below was written solely by me, Shaun Fisher,
//and that any help I received adhered to the rules stated for this exam.

#include <iostream>
#include <string>
#include "Event.h"
using namespace std;


Event::Event()//Default values
{
	Time = -1;//Shows there is an open slot of time
	Title = "free";//This event is open to set something there
}

Event::Event(int time, string name)//Overload constructor
{
	Time = time;
	Title = name;
}

Event::Event()//Default values
{
	Time = -1;//No time scheduled
	Title = "Free";
}

void Event::setTitle(string name)//Input title of the event
{
	Title = name;
}

void Event::setTime(int t)//Input time of the event
{
	Time = t;
}

int Event::getTime()
{
	return Time;//returning time value
}

string Event::getTitle()
{
	return Title;//returning the title of the event
}
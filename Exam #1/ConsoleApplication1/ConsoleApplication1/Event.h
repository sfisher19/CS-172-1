//Shaun Fisher
//03-03-2016
//EXAM #1
//CS 172-1
//I affirm that all code given below was written solely by me, Shaun Fisher,
//and that any help I received adhered to the rules stated for this exam.
#include <iostream>
#include <string>
#ifndef EVENT_H_//Inclusion Guard
#define EVENT_H_
using namespace std;

class Event
{
private:
	int Time;
	string Title;

public:
	Event(int time, string name);//Argument constructor
	Event();//No-argument constructor
	void setTitle(string name);//Input event title
	void setTime(int t);//Input event time
	int getTime();//Output the time
	string getTitle();//Output the name
};
#endif
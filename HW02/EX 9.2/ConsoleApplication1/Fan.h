#include <iostream>
using namespace std;

#ifndef Fan_H
#define Fan_H

class Fan
{
public:
	double radius; //radius of fan
	bool on; //determine whether fan is on or off      /* ---Joseph--- These should be private (-1) */
	int speed; //speed of fan

	Fan()//default values
	{
		speed = 1;
		on = false;
		radius = 5;
	}

	Fan(double x, bool y, int z)//Overload constructor
	{
		radius = x;
		on = y;
		speed = z;
	}

	double getRadius(double x)//Calling radius
	{
		return x;
	}

	int getSpeed(int z)//Calling speed
	{
		return z;
	}

	bool getOn(bool y)//Calling fan on/off
	{
		return y;
	}
	
};

#endif
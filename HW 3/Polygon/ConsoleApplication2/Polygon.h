//Shaun Fisher
//EX 10.13
//03-08-2016
//CS 172-2

#include <iostream>
#include <cmath>
#include <string>
#ifndef REGULARPOLYGON_H
#define REGULARPOLYGON_H//Inclusion guard

using namespace std;

class RegularPolygon
{
private://All are in private settings
	int n;//number of sides
	double side;//side length
	double x;//x coordinate of center of polygon
	double y;//y coordinate of center of polygon
	double Perimeter;//perimeter of polygon
	double Area;//area of polygon
	

public:
	//void setPerimeter(int numSides, double sideLength);
	//double getPerimeter();
	//void setArea(int n, double side);
	//double getArea();
	RegularPolygon()//no-arg Constructor
	{
		n = 3;
		side = 1;
		x = 0;
		y = 0;
		setPerimeter(n, side);
		setArea(n, side);
	}

	RegularPolygon(int numSides, double sideLength, double _y, double _x)//overload constructor
	{
		//Renaming variables
		n = numSides;
		side = sideLength;
		y = _y;
		x = _x;
		setPerimeter(numSides, sideLength);
		setArea(numSides, sideLength);
	}

	void setPerimeter(int numSides, double sideLength)
	{
		Perimeter = numSides * sideLength;//Equation for perimeter of a polygon
	}

	double getPerimeter()
	{
		return Perimeter;//Outputs perimeter when called
	}

	void setArea(int n, double side)
	{
		Area = (n * pow(side, 2)) / (4 * tan(3.14 / n));//Equation that was given for the area of a polygon
	}

	double getArea()
	{
		return Area;//Outputs area when it is called
	}

};
#endif
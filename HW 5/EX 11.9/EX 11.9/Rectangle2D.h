#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H
#include <iostream>
#include <cmath>

using namespace std;

class Rectangle2D
{
public:
	double x, y;
	void setX(double x);//Sets the X coordinate
	void setY(double y);//Sets the Y coordinate
	double getX();//Retrieves X coordinate
	double getY();//Retrieves Y coordinate
	double width, height;
	void setWidth(double width);//Sets the width value
	void setHeight(double height);//Sets the height value
	double getWidth();//Retrieves the width
	double getHeight();//Retrieves the height
	const bool contains(double x, double y);//To check and see whether the x,y coordinate is inside the rectangle
	const bool contains(const Rectangle2D &r);//To check and see whether the rectangle is inside the rectangle
	const bool overlap(const Rectangle2D &r);//To check and see whether the rectangle overlaps the rectangle


	Rectangle2D()//No arg. constructor
	{
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	}


	Rectangle2D(double X, double Y, double Width, double Height)//Argument constructor
	{
		x = X;
		y = Y;
		width = Width;
		height = Height;
	}


	void setX(double x)//Sets X to a value
	{
		x = X;
	}


	void setY(double y)//Sets Y to a value
	{
		y = Y;
	}


	double getX()//Retrieves X when needed
	{
		return X;
	}


	double getY()//Retrieves Y when needed
	{
		return Y;
	}


	void setWidth(double width)//Sets Width to a value
	{
		width = Width;
	}


	void setHeight(double height)//Sets Height to a value
	{
		height = Height;
	}


	double getWidth()//Retrieves Width when needed
	{
		return Width;
	}


	double getHeight()//Retrieves Height when needed
	{
		return Height;
	}


	const double getPerimeter(double width, double height)//Calculates the perimeter of the rectangle
	{
		double Perimeter = (Width * 2) + (2 * Height);//Formula for the perimeter
		return Perimeter;
	}


	const double getArea(double width, double height)//Calculates the area of the rectangle
	{
		double Area = Width * Height;//Formula for the area of a rectangle
		return Area;
	}


	const bool contains(double x, double y)
		//Checking to see whether the determined point is inside rectangle 1
		//If the point is inside of rectangle 1, then the bool will return true
		//If the point is on or outside of the rectangle, the bool will return false
	{
		if (x > -0.5 && x < 0.5 && y > -0.5 && y < 0.5)
		{
			return true;//Returns true if the point is inside the rectangle specified above
		}
		else
		{
			return false;//Returns false if the point is on or outside the rectangle
		}
	}


	const bool contains(const Rectangle2D &r)//Checking to see whether or not the rectangle is inside the rectangle
	{
		//An if statement will be made to make sure vertex points are within the rectangle 1 perimeter
		//If that comes out to be true, then it will return true
		//If not, then it will return false.
	}


	const bool overlap(const Rectangle2D &r)//Checking to see whether or not the rectangle is overlapping the rectangle
	{
		//An if statement will check and see if between 1-3 vertices are within the rectangle 1
		//If there are between 1-3, it will return true
		//If there aren't any or all 4, then it will return false.
	}

}
#endif;
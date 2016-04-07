//Shaun Fisher
//03-31-2016
//HW 5: EX 11.0
//CS 172-2

#include <iostream>
#include <cmath>
#include "Rectangle2D.h"
using namespace std;

int main()
{
	Rectangle2D r1;//Data for Rectangle 1
	r1.setX(2);//x value
	r1.setY(2);//y value
	r1.setWidth(5.5);//width value
	r1.setHeight(4.9);//height value

	Rectangle2D r2;//Data for Rectangle 2
	r2.setX(4);//x value
	r2.setY(5);//y value
	r2.setWidth(10.5);//width value
	r2.setHeight(3.2);//height value

	Rectangle2D r3;//Data for rectangle 3
	r3.setX(3);//x value
	r3.setY(5);//y value
	r3.setWidth(2.3);//width value
	r3.setHeight(5.4);//height value

	cout << "Perimeter of Rectangle 1: " << r1.getPerimeter(5.5, 4.9) << endl;//Displays perimeter for rectangle 1
	cout << "Area of Rectangle 1: " << r1.getArea(5.5, 4.9) << endl;//Displays area for rectangle 1

	cout << r1.contains(3, 3) << endl;//Sees whether the point (3,3) is inside rectangle 1
	cout << r1.contains(r2) << endl;//Sees whether rectangle 2 is insie rectangle 1
	cout << r1.overlap(r3) << endl;//Sees whether rectangle 3 overlaps with rectangle 1

}
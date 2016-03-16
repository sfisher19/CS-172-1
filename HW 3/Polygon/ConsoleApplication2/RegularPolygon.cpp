//Shaun Fisher
//EX 10.13
//03-08-2016
//CS 172-2


#include "Polygon.h"

using namespace std;

int main()
{
	
	RegularPolygon Poly1;
	//Poly1.RegularPolygon();
	cout << "Perimeter: " << Poly1.getPerimeter() << endl;//Outputs perimeter for default values
	cout << "Area: " << Poly1.getArea() << endl;//Outputs area for default values

	RegularPolygon Poly2(6, 3, 0.0, 0.0);//number of sides=6, side length=3, center @ (0,0)
	//Poly2.RegularPolygon(6, 3);
	cout << "Perimeter: " << Poly2.getPerimeter() << endl;//Output Perimeter
	cout << "Area: " << Poly2.getArea() << endl;//Output Area

	RegularPolygon Poly3(10, 4, 5.6, 7.8);//Number of sides=10, side length=4, cetered @ (5.6,7.8)
	//Poly3.RegularPolygon;
	cout << "Perimeter: " << Poly3.getPerimeter() << endl;//Output perimeter
	cout << "Area: " << Poly3.getArea() << endl;//Output Area

	return 0;

}
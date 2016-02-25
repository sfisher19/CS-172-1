//Shaun Fisher
//Exercise 9.2
//02-21-2016
//CS 172-1

#include <iostream>
#include "Fan.h"
using namespace std;

int main()
{
	Fan fan1;
	cout << fan1.getRadius(10) << endl;//Setting radius to 10
	cout << fan1.getSpeed(3) << endl;//Speed set to 3
	cout << fan1.getOn(true) << endl;//The fan is on

	Fan fan2;
	cout << fan2.getRadius(5) << endl;//Setting radius to 5
	cout << fan2.getSpeed(2) << endl;//Speed set to 2
	cout << fan1.getOn(false) << endl;//The fan is off

}
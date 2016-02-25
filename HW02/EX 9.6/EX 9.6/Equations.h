#include <iostream>
#include <cmath>
#ifndef QUADRATIC_H
#define QUADRATIC_H
using namespace std;

class QuadraticEquations
{
public:
	double a;
	double b;
	double c;
	double discriminant;
	//Made everyting a double so everything could be mathematically processed.

	QuadraticEquations()//Default values
	{
		a = 5;
		b = 6;
		c = 1;
	}

	QuadraticEquations(double x, double y, double z)//Overload constructor
	{
		a = x;
		b = y;
		c = z;
	}

	void setDiscriminant(double a, double b, double c)//setting the value for the variable "discriminant"
	{
		discriminant = ((pow(b, 2)) - 4 * a*c);
	}

	double getDiscriminant(double a, double b, double c)
	{
		if (discriminant < 0)//If discriminant is less than 0, then the roots will not exist.
		{
			cout << "Discriminant is negative. No real roots." << endl;
			return 0;
		}
		else
		{
			return discriminant;//Meaning discriminant is positive
		}
	}

	double rootOne(double a, double b, double c)
	{
		double rootOne = ((-b + pow(discriminant, 0.5) / (2*a)));//Quadratic Equation
		return rootOne;
	}
	
	double rootTwo(double a, double b, double c)
	{
		double rootTwo = ((-b - pow(discriminant, 0.5) / (2*a)));//Quadratic Equation
		return rootTwo;
	}
};

#endif
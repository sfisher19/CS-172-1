#include <iostream>
#ifndef EVEN_H
#define EVEN_H
using namespace std;


class EvenNumber
{
public:
	int value;

	EvenNumber()//Default constructor
	{
		value = 0;
	}

	EvenNumber(int x)//Overload constructor
	{
		value = x;
	}

	int getValue(int x)//Setting value of number input by user and outputting it
	{
		return x;
	}

	int getNext(int x)
	{
		if ((x % 2) == 0)//Shows that the number is even
		{
			int newValue = x + 2;//Add two to get next higher even number
			return newValue;
		}
		
		else if ((x % 2) != 0) //Show that the number is odd
		{
			int newValue = x + 1;//Add one to get next higher even number
			return newValue;
		}
	}

	int getPrevious(int x)
	{
		if ((x % 2) == 0)//Show that number is even
		{
			int newValue = x - 2;//Subtract two to get the next lower even number
			return newValue;
		}

		else if ((x % 2) != 0) //Show that the number is odd
		{
			int newValue = x - 1;//Subtract one to get the next lower even number
			return newValue;
		}
	}

};
#endif
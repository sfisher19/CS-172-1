//Shaun Fisher
//EX 9.11
//02-24-2016
//CS 172-1

#include "Number.h"

int main()
{
	int x = 0;

	cout << "Please enter a number: ";
	cin >> x;//Put in 16 for your example to satisfy last part of assignment
	cout << endl;

	EvenNumber num1;
	cout << num1.getValue(x) << endl;//Returning the user's value
	cout << num1.getNext(x) << endl;//Returning the higher even number
	cout << num1.getPrevious(x) << endl;//Returning the lower even number


}
//Shaun Fisher
//03-31-2016
//HW 5: EX 11.3
//CS 172-2

#include <iostream>
#include "Capacity.h"
using namespace std;

int main()
{
	int arraySize = 0;
	cout << "Enter in a size of your array: ";
	cin >> arraySize;//Obtains original size of the array
	const int size = arraySize; //Puts the size of the array into a const value
	const int* list[size];//Create const int pointer to be put into the function call below

	doubleCapacity(list[size], size);

}

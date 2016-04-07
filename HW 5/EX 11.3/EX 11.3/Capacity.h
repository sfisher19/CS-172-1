//Shaun Fisher
//03-31-2016
//HW 5: EX 11.3
//CS 172-2

#include <iostream>
using namespace std;

int doubleCapacity(const int* list, int size)
{
	static int doublesize = size * 2;//doublesize equals the quantity of size times 2.
	int* list = new int[doublesize];//The new size of the array is doublesize.

	for (int i = 0; i < size; i++)//Putting in the original values of the array into the new array
	{
		list = list[i];
	}

	return list;
}
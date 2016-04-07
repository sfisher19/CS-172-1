//Shaun Fisher
//03-31-2016
//HW 5: EX 11.5
//CS 172-2

#include <iostream>
using namespace std;

int main()
{
	int list[] = { 1, 2, 4, 5, 10, 11, 2, -22 };//Setting the array "list" to its 8 values
	int* p = list;//Declaring pointer

	int smallest = list[0];//Initializing smallest value to first number in array.

	for (int i = 0; i <= 7; i++)//Going through the values to see if there is a smaller
								//number than the first number in the array.
	{
		if (list[i] < smallest)//If the value at that spot in the array is less than smallest
		{
			smallest = list[i];//Smallest gets reinitialized to the new smaller value
		}
	}

	cout << smallest << endl;//Displays smallest number

	return 0;
}
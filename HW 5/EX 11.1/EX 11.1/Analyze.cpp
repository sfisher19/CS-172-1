//Shaun Fisher
//03-31-2016
//HW 5: EX 11.1
//CS 172-2

#include <iostream>
using namespace std;

int main()
{
	cout << "Please enter in a size for the array: ";
	int size = 0.0;//Initialized
	cin >> size;//User enters in the size of the array. How many numbers will they need to input?
	cout << endl;
	double* pintarray = new double[size];//Allocate array of size 'size'

	double sum = 0;//Used eventually to calculate average
	for (int i = 0; i < size; i++)
	{
		cout << "Please enter in a value: ";
		int value = 0;//Initialized
		cin >> value;//Receives value from user
		cout << endl;
		pintarray[i] = value;//Puts value from user into the first block of the array
		sum += value;//Add the new value to the sum
	}

	double avg = (sum / size);//Equation for calculating average
	cout << "Your average: " << avg << endl;//Displays average

	cout << "These numbers you entered are above the average: ";

	for (int i = 0; i < size; i++)//This for loop is used to display the numbers in the array that the user input
	{
		if (pintarray[i] > avg)//This if statement is used to display the numbers that were greater than the average
		{
			cout << pintarray[i] << endl;
		}
	}
}
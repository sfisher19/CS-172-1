//Shaun Fisher
//04-14-2016
//EX 12.2
//CS 172-1

#include <iostream>
#include <string>
using namespace std;


template< typename T >
int linearSearch(const T list[], T key, int arraySize)//Need to have this function as an int because it returns an int
{
	for (int i = 0; i < arraySize; i++)//array size is the number of elements in the array
	{
		if (key == list[i])//If the number is equal to the element in the function
			return i;//Return the position of that element
	}
	return -1;//If there is no equal number, then returns -1.
}

int main()
{
	int list[] = { 1, 4, 4, 2, 5, -3, 6, 2 };//List of integers in array list[]
	int i = linearSearch(list, 4, 8);//searches list for number 4 out of the size of the array
	cout << i << endl;//Displays position of 4 in the array (first position in the array)
	int j = linearSearch(list, -4, 8);//searches list for number -4 out of the size of the array
	cout << j << endl;//Displays position of -4 in the array (but displays -1 because not in the array)
	int k = linearSearch(list, -3, 8);//searches list for number -3 out of the size of the array
	cout << k << endl;//Displays position of -3 in the array

	double listTwo[] = { 2.3, 5.7, 6.3, 109.6, 4.235 };//List of doubles in array listTwo{}
	int x = linearSearch(listTwo, 5.7, 5);//Searches list for number 5.7 out of the size of the array
	cout << x << endl;//Returns positions
	int y = linearSearch(listTwo, 2.4, 5);//Searches array for number 2.4
	cout << y << endl;//Not there, so returns -1
	int z = linearSearch(listTwo, 4.235, 5);//Searches array for 4.235
	cout << z << endl;//Returns position

	string listThree[] = { "Bobby" , "Joe" , "Sally" , "Cassie" , "Nathan" , "Shaun", "Dr. Bell" };
	int a = linearSearch<string>(listThree, "Joe" , 7);//a is displayed as an int because it is returning an int in the function above
														//It is searching for string "Joe" in the array
	cout << a << endl;//Displays position of Joe in the array
	int b = linearSearch<string>(listThree, "Bill", 7);//Searches array for Bill
	cout << b << endl;//Displays position of Bill in the array (no Bill, so displays -1)
	int c = linearSearch<string>(listThree, "Dr. Bell", 7);//Searches array for Dr. Bell
	cout << c << endl;//Displays position of Dr. Bell in the array
}

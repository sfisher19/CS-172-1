//Shaun Fisher
//04-19-2016
//EX 12.4
//CS 172-1

#include <iostream>
#include <string>
using namespace std;


template<typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0; i < size; i++)//Going through all of the elements in the array
	{
		if (list[i] > list[i + 1])//Compares to the next element in the array to see whether the previous element
								//is smaller, make sure is in ascending order.
		{
			return false;//Returns 0 if there is an element that is greater than the next element
		}	
	}
	return true;//Returns 1 if all the elements are in order
}



int main()
{
	int list[] = { 1, 3, 5, 7, 19, 23 };//first list, list of ints
	bool i = isSorted(list, 6);//calling the list and how many elements are in the array
	cout << i << endl;//returning a bool, so i must be a bool. Should return 1.
	

	double listTwo[] = { 2.3, 5.7, 6.3, 109.6, 4.235 };//second list, list of doubles
	bool j = isSorted(list, 6);//calling the second list and how many elements are in the array
	cout << j << endl;//returning a bool, see whether is in ascending order or not, should return 0.

	string listThree[] = { "Bobby", "Joe", "Sally", "Cassie", "Nathan", "Shaun", "Dr. Bell" };//third list, list of strings
	bool k = isSorted<string>(listThree, 7);//calling the list and how many elements are in the array
	cout << k << endl;//returning a bool, see whether is in ascending order.
}
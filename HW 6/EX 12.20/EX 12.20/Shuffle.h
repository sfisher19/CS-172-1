#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void shuffle(vector<T>& V)
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter in value " << i + 1 << " : ";//Obtain our 10 integer values
		cin >> V[i];//Places them in order
		cout << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		V[i] = V[(rand() % 10)];//This for loop places each value that was input in the vector to a random position
								//in the vector, causing the randmization that we want.
	}
}
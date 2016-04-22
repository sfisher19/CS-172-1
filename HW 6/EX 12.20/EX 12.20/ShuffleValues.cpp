//Shaun Fisher
//04-19-2016
//EX 12.20
//CS 172-1

#include <iostream>
#include "Shuffle.h"
using namespace std;

int main()
{
	vector<int> vectorOne;//Create vectorOne;

	shuffle(vectorOne);//Calls shuffle function

	for (int i = 0; i < 10; i++)
	{
		cout << vectorOne[i];//Displays the randomized order of the elements in the vector
	}

	return 0;
}
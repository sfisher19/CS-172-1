//Shaun Fisher
//04-19-2016
//EX 12.8
//CS 172-1

#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()     // Joseph: Didn't implement the vector class. See your textbook for an example of an implementation of the stack. It is pretty much that code exactly.
{
	vector<int> vectorOne;//First vector of type int
	vector<int> vectorOne(5);//Defining an int vector with initial size 5 elements
	vector<int> vectorOne(3, 16);//Defining 3-element int vector and initialize all elements to 16

	
	vectorOne.push_back(7);//Pushes int 7 on the vector
	vectorOne.push_back(19);//Pushes int 19 on the vector
	vectorOne.pop_back();//Pops last element added to vector off. Gone forever.
	vectorOne.size();//Checks the size of the vectorOne
	vectorOne.at(1);//Checks to see what is at index 1 of vectorOne.

	vector<int> vectorTwo;//Second vector of type int
	vectorTwo.push_back(17);//Pushes int 17 on the vector
	vectorTwo.push_back(22);//Pushes int 22 on the vector
	vectorTwo.push_back(2);//Pushes int 2 on the vector

	vectorOne.empty();//Checks to see if vectorOne is empty, boolean type
	vectorOne.clear();//Clears everything out of vectorOne
	vectorOne.swap(vectorTwo);//Swaps content with vectorTwo

}
//Shaun Fisher
//Exercise 9.6
//02-23-2016
//CS 172-1

#include "Equations.h"

int main()
{
	int x;
	int y;
	int z;

	cout << "Enter in x value: ";
	cin >> x;//a value
	cout << endl;
	cout << "Enter in y value: ";
	cin >> y;//b value
	cout << endl;
	cout << "Enter in z value: ";
	cin >> z;//c value
	cout << endl;

	QuadraticEquations quad1;
	quad1.setDiscriminant(x, y, z);//Setting value of user to a, b, and c
	cout << quad1.getDiscriminant(x, y, z) << endl;//Outputting the value of the discriminant

	if (quad1.getDiscriminant(x, y, z) < 0)//If discriminant is less than zero, there are no real roots
	{
		return 0;
	}
	else if (quad1.getDiscriminant(x, y, z) == 0)//If discriminant is equal to zero, only one root is displayed
	{
		cout << quad1.rootOne(x, y, z) << endl;//Outputting the value of root 1
	}
	else//If discriminant is greater than zero
	{
		cout << quad1.rootOne(x, y, z) << endl;//Outputting the value of root 1
		cout << quad1.rootTwo(x, y, z) << endl;//Outputting the value of root 2
	}
	
}

//Shaun Fisher
//EX 10.5
//03-08-2016
//CS 172-2

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	string word;
	cout << "Please enter a word: ";
	cin >> word;//User enters word to test and see if it is a palindrome
	cout << endl;
	stack<string> palinStack;//having the string gave me some trouble
	//should use type "char", but unsure of how to use the stack with the "char" variable type
	palinStack.push(word);//Puts word into stack
	
	while (!palinStack.empty())//While the stack is not empty
	{
		cout << palinStack.top();//Unload stack from top to produce last letter up until the first letter
		palinStack.pop();
	}

	return 0;
}
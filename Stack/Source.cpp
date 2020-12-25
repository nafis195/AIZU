// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// AIZU - Stack
// Problem Statement - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_A
// Date - 12/24/2020
// Time - 10:34 PM
// Main.cpp





#include<iostream>
#include<algorithm>
#include<stack>
#include<stdio.h>
using namespace std;

int solve(string myString);

stack <int> myStack;

int main()
{

	string input;

	while (cin >> input)
	{
		if (input == "+" || input == "-" || input == "*")
			myStack.push(solve(input));
		else
			myStack.push(atoi(input.c_str()));

		if (getchar() == '\n')
			cout << myStack.top() << endl;
	}

	return 0;
}


int solve(string myString)
{
	int x;
	int y;

	y = myStack.top();
	myStack.pop();
	x = myStack.top();
	myStack.pop();

	if (myString == "+")
		return x + y;
	else if (myString == "-")
		return x - y;
	else if (myString == "*")
		return x * y;
}
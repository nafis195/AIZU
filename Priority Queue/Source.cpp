// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// AIZU - Priority Queue
// Problem Statement - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_9_C#
// Date - 12/30/2020
// Time - 3:00 AM
// Main.cpp





#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;

int main()
{
	priority_queue <int> myQueue;
	string input;
	int x;

	while (cin >> input)
	{
		if (input == "end")
			return 0;
		else if (input == "extract")
		{
			cout << myQueue.top() << endl;
			myQueue.pop();
		}
		else if(input == "insert")
		{
			cin >> x;
			myQueue.push(x);
		}
	}
}
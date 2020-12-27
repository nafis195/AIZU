// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// AIZU - Queue
// Problem Statement - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_B
// Date - 12/26/2020
// Time - 9:28 PM
// Main.cpp





#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<queue>
#include<string>
#include<utility>
using namespace std;

int main()
{
	queue < pair <string, int> > myQueue;
	int numberOfProcess;
	int quantum;
	string processName;
	int time;
	int countTime = 0;

	cin >> numberOfProcess >> quantum;

	for (int i = 0; i < numberOfProcess; i++)
	{
		cin >> processName >> time;
		myQueue.push(make_pair(processName, time));
	}

	while (!myQueue.empty())
	{
		pair <string, int> topElement = myQueue.front();
		myQueue.pop();

		if (topElement.second <= quantum)
		{
			countTime = countTime + topElement.second;
			cout << topElement.first << " " << countTime << endl;
		}
		else
		{
			countTime = countTime + quantum;
			myQueue.push(make_pair(topElement.first, topElement.second - quantum));
		}
	}

	return 0;
}
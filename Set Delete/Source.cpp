// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// AIZU - Set Delete
// Problem Statement - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_7_B
// Main.cpp


#include<iostream>
#include<string>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
	set <long long int> set1;

	long long int testCases;
	cin >> testCases;
	
	long long int userInput, setInput;
	for (long long int i = 0; i < testCases; i++)
	{
		cin >> userInput >> setInput;

		if (userInput == 0)
		{
			set1.insert(setInput);
			cout << set1.size() << endl;
		}
		else if (userInput == 1)
		{
			const bool answer = set1.find(setInput) != set1.end();
			if (answer)
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else
		{
			set1.erase(setInput);
		}
	}

	cout << endl;
	return 0;
}
// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// AIZU - Bubble Sort
// Problem Statement - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_A
// Date - 01/02/2021
// Time - 12:15 AM
// Main.cpp





#include<iostream>
#include<algorithm>
using namespace std;


void bubbleSort(int A[], int n);


int main()
{
	int size;
	int myArray[100000];

	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> myArray[i];
	}

	bubbleSort(myArray, size);

	return 0;
}


void bubbleSort(int A[], int n)
{ 
	int flag = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				flag++;
				swap(A[j], A[j + 1]);
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << A[i] << ' ';
	}

	cout << endl;

	cout << flag;
}
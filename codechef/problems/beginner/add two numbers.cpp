/*
 * Program is very simple, given two integers A and B, write a program to add these two numbers.
 * The first line contains an integer T, the total number of test cases.
 * Then follow T lines, each line contains two Integers A and B.
 */

#include <iostream>
using namespace std;

int main()
{
	int n;

	cin>>n;

	int ans[n];

	for(int i=0; i<n; i++)
	{
		int a,b;
		scanf("%d %d", &a, &b);
		ans[i] = a+b;
	}

	for(int i=0; i<n; i++)
	{
		printf("%d\n", ans[i]);
	}

	return 0;

}
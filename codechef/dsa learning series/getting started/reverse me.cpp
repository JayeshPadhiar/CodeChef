/*
 * You are given a list of N integers and you need to reverse it and print the reversed list in a new line.
 */

#include <iostream>
using namespace std;

int main()
{

	int n;

	cin>>n;

	int arr[n];

	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	for(int i=n-1; i>=0; i--)
	{
		cout<<arr[i]<<" ";
	}

	return 0;

}
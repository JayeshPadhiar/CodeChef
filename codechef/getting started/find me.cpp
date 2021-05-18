/*
 * You are given a list of N integers and a value K.
 * Print 1 if K exists in the given list of N integers, otherwise print −1.
 */

#include <iostream>
using namespace std;

int main()
{

	int n,k;

	int found = -1;

	cin>>n>>k;

	int arr[n];

	for (int i=0; i<n; i++)
	{
		cin>>arr[i];

		if(arr[i] == k){
			found = 1;
		}
	}

	cout<<found;

	return 0;

}
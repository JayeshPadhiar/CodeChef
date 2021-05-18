/*
 * You are given a number N.
 * Find the sum of all numbers from 1 to N.
 */

#include <iostream>
using namespace std;

int main()
{
	long long int n;

	cin>>n;
	cout<<((n * (n+1))/2);

	return 0;
}
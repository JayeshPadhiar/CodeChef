/*
 * You are given a number N and find the sum of the first N odd and even numbers in a line separated by space.
 * All even and odd numbers should be greater than 0.
 */

#include <iostream>
using namespace std;

int main()
{

	int n;
	long long int sumeven=0, sumodd=0;

	cin>>n;

	for(int i=0; i<n; i++)
	{
		sumodd += (i*2)+1;
		sumeven += ((i+1)*2);
	}

	cout<<sumodd<<" "<<sumeven<<endl;

	return 0;

}
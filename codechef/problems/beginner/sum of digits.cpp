/*
 * You're given an integer N.
 * Write a program to calculate the sum of all the digits of N.
 */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i=0; i<n; i++)
	{
		int x, sum=0;

		cin>>x;

		while(x>9)
		{
			int last = x%10;
			sum+=last;
			x -= last;
			x /= 10;
		}
		sum += x;

		cout<<sum<<endl;
	}

	return 0;

}
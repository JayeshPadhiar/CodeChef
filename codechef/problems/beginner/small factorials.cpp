/*
 * You are asked to calculate factorials of some small positive integers.
 */

#include <iostream>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);

	for(int i=0; i<n; i++)
	{
		unsigned long int x;
		cin>>x;

		for(int i=x-1; i>=1; i--)
		{
			x *= i;
		}
		cout<<x<<endl;
	}

	return 0;
}
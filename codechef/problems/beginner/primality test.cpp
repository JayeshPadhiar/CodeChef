/*
 * Accomplish this task by writing a computer program which will calculate whether the number is prime or not.
 */

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		int n;
		bool prime = true;

		cin>>n;

		for(int i=1; i<=n; i++)
		{
			if(n == 1)
			{
				prime = false;
				break;
			}

			if(n%i == 0 && i!=1 && i!=n)
				prime = false;
		}

		if(prime)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;

	}
	return 0;
}
/*
 * Write a program to find the factorial value of any number entered by the user.
 */

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		int x;
		long int fact=1;

		cin>>x;

		for(int j=1; j<=x; j++)
			fact *= j;

		cout<<fact<<endl;
	}

	return 0;

}
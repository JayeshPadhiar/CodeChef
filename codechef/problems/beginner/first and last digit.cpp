/*
 * If Give an integer N.
 * Write a program to obtain the sum of the first and last digits of this number.
 */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		int x;
		cin>>x;

		int last;

		last = x%10;

		while(x>9){
			x /= 10;
		}

		cout<<x+last<<endl;
	}

	return 0;

}
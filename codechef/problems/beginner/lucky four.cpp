/*
 * He has a list of T integers, for each of them he wants to calculate the number of occurrences of the digit 4 in the decimal representation.
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
		int numfour=0;

		cin>>x;

		while(x>1)
		{
			int last = x%10;

			if (last == 4)
				numfour++;

			x -= last;
			x /= 10;

		}

		cout<<numfour<<endl;
	}

	return 0;

}
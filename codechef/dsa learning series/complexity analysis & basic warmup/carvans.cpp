/*
 *	The first line of the input contains a single integer T denoting the number of test cases to follow.
 * 	Description of each test case contains 2 lines.
 * 	The first of these lines contain a single integer N, the number of cars.
 * 	The second line contains N space separated integers, denoting the maximum speed of the cars in the order they entered the long straight segment.
 */

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		int numcars;
		int nummax = 0;
		int maxspeed = 0;

		cin>>numcars;

		for(int i=0; i<numcars; i++)
		{
			int speed;
			cin>>speed;

			if(i==0)
			{
				nummax = 1;
				maxspeed = speed;
				continue;
			}

			if(speed <= maxspeed)
			{
				nummax++;
				maxspeed = speed;
			}
			else{
			}
		}
		cout<<nummax<<endl;
	}
	return 0;
}
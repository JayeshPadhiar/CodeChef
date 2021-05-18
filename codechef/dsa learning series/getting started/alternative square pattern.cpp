/*
 * You're given a number N. Print the first N lines of the below-given pattern.

	1 2 3 4 5
	10 9 8 7 6
	11 12 13 14 15
	20 19 18 17 16
	21 22 23 24 25
	30 29 28 27 26
 */

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i=1; i<=n; i++)
	{
		if(i%2 == 1){
			int x = (5*(i-1))+1;

			for(int j=0; j<5; j++)
				cout<<x+j<<" ";
		}
		else
		{
			int y = 5*i;

			for(int j=0; j<5; j++)
				cout<<y-j<<" ";
		}

		cout<<endl;
	}

	return 0;

}
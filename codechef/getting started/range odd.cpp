/*
 *You're given two numbers L and R.
 * Print all odd numbers between L and R (both inclusive) in a single line separated by space, in ascending (increasing) order.
 */

#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;

	if(a%2 == 0)
	{
		a++;
	}

	if(b%2 == 0)
	{
		b--;
	}

	for(int i=a; i<=b; i+=2)
	{
		cout<<i<<" ";
	}

	return 0;
}
/*
 * Now the boss of Chef wants to calculate how many times the Chef has entered into the building.
 * The boss asked to the guard and they gave him two integers A and B, the count of first guard and second guard respectively.
 * Help the boss to count the minimum and maximum number of times Chef could have entered into the office building.
 */

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		int a,b;
		cin>>a>>b;

		int max = a+b;
		int min = (a>b)? a: b;

		cout<<min<<" "<<max<<endl;
	}
	return 0;
}
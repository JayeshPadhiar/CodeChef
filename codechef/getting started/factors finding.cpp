/*
 * You are given a number N and find all the distinct factors of N.
 */
#include <iostream>
using namespace std;

int main()
{

	int n;

	cin>>n;

	int factors[n];
	int num_factors = 0;

	for(int i=1; i<=n; i++)
	{
		if(n%i == 0)
		{
			factors[num_factors] = i;
			num_factors++;
		}
	}

	cout<<num_factors<<endl;
	for(int i=0; i<num_factors; i++)
	{
		cout<<factors[i]<<" ";
	}

	return 0;

}
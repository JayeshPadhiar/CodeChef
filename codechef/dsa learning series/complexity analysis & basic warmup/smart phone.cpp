/*
 * You want to fix a price so that the revenue you earn from the app is maximized.
 * Find this maximum possible revenue.
 * For instance, suppose you have 4 potential customers and their budgets are 30, 20, 53 and 14.
 * In this case, the maximum revenue you can get is 60 .
 */

#include <iostream>
using namespace std;

int main()
{
	int n;
	long long int budget[500000] = {};
	long long int maxrev = 0;
	cin>>n;

	for(int i=0; i<n; i++)
	{
		cin>>budget[i];
	}

	for(int i=0; i<n; i++){
		long long int x = budget[i];
		long long int rev=0;

		for(int j=0; j<n; j++)
		{
			if(budget[j]>=x)
				rev+=x;
		}

		if(rev>maxrev)
			maxrev=rev;
	}

	cout<<maxrev;
	return 0;
}
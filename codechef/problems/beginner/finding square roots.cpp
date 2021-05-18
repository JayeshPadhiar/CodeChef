/*
 * The first line of the input contains an integer T, the number of test cases.
 * T lines follow.
 * Each line contains an integer N whose square root needs to be computed.
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
		int ans=0;

		cin>>n;
		while(ans*ans <= n)
		{
			ans++;
		}
		cout<<ans-1<<endl;
	}
	return 0;

}
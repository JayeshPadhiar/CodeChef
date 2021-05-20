/*
 * The first line contains an integer T, total number of testcases.
 * Then follow T lines, each line contains an integer N.
 */

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		int n, ans=0;

		cin>>n;

		while(n>0)
		{
			int first = n%10;
			n /= 10;

			ans = (ans*10)+first;
		}

		cout<<ans<<endl;
	}
	return 0;
}
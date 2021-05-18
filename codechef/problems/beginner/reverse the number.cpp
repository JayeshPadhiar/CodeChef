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
		int x;
		int ans=0;
		cin>>x;

		while(x>=1)
		{
			int y = x%10;
			ans = (ans*10)+y;
			x /= 10;
		}
		cout<<ans<<endl;
	}
	return 0;

}
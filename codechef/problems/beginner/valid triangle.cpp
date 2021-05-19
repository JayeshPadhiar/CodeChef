/*
 *
 */

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		int a,b,c;

		cin>>a>>b>>c;

		if((a!=0) && (b!=0) && (c!=0))
		{
			if(a+b+c == 180)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
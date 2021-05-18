/*
 * You're given the three angles a, b, and c respectively.
 * Now check if these three angles can form a valid triangle with an area greater than 0 or not.
 * Print "YES"(without quotes) if it can form a valid triangle with an area greater than 0, otherwise print "NO" (without quotes).
 */

#include <iostream>
using namespace std;

int main()
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

	return 0;

}
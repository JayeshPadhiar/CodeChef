/*
 * Relational Operators are operators which check relatioship between two values.
 * Given two numerical values A and B you need to help chef in finding the relationship between them that is,
 */

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		long int a,b;
		cin>>a>>b;

		if(a==b)
			cout<<"=\n";
		else if(a>b)
			cout<<">\n";
		else
			cout<<"<\n";
	}
	return 0;
}
/*
 * You're given the length of three sides a, b, and c respectively.
 * Now check if these three sides can form a triangle or not.
 * Print "YES"(without quotes) if it can form a valid triangle with an area greater than 0, otherwise print "NO" (without quotes).
 */

#include <iostream>
using namespace std;

int main()
{
	int a,b,c;

	cin>>a>>b>>c;

	if((a+b>c) && (b+c>a) && (a+c>b))
		cout<<"YES";
	else
		cout<<"NO";

	return 0;

}
/*
 * You're given a number N.
 * If N is divisible by 5 or 11 but not both then print "ONE"(without quotes).
 * If N is divisible by both 5 and 11 then print "BOTH"(without quotes).
 * If N is not divisible by 5 or 11 then print "NONE"(without quotes).
 */

#include <iostream>
using namespace std;

int main()
{
	int n;

	cin>>n;

	if ((n%5 == 0) && (n%11 == 0))
	{
		cout<<"BOTH";
	}
	else if ((n%5 != 0) && (n%11 != 0))
	{
		cout<<"NONE";
	}
	else {
		cout<<"ONE";
	}

	return 0;


}
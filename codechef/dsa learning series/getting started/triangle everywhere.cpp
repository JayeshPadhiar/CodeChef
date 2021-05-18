/*
 * You're given the length of three sides a, b, and c respectively.
 * Now If these three sides can form an Equilateral Triangle then print 1, if these three sides can form an Isosceles Triangle then print 2, if these three sides can form a Scalene Triangle then print 3, otherwise print −1.
 */

#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;

	if ((a+b > c) && (b+c > a) && (a+c >b))
	{
		if((a==b) && (b==c) && (c==a))
			cout<<"1"<<endl;
		else if((a!=b) && (b!=c) && (c!=a))
			cout<<"3"<<endl;
		else
			cout<<"2";
	}
	else
	{
		cout<<"-1"<<endl;
	}

	return 0;
}
/*
 * Write a program to take two numbers as input and print their difference if the first number is greater than the second number otherwise print their sum.
 */

#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;

	int ans = (a>b)?(a-b):(a+b);

	cout<<ans<<endl;

	return 0;
}
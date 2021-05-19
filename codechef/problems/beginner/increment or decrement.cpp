/*
 * Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1.
 */

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	cout<<((n%4 == 0)? n+1:n-1)<<endl;
	return 0;
}
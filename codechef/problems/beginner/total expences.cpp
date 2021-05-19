/*
 * While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000.
 * If the quantity and price per item are input, write a program to calculate the total expenses.
 */

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		double quan, price;
		cin>>quan>>price;

		double ans = (quan>1000)? ((9*(quan*price))/10):(quan*price);

		printf("%.6lf\n", ans);
	}
	return 0;
}
/*
 * Chef went to a shop and buys a pens and b pencils.
 * Each pen costs x units and each pencil costs y units.
 * Now find what is the total amount Chef will spend to buy a pens and b pencils.
 */

#include <iostream>
using namespace std;

int main()
{

	int a, b, x, y;

	cin>>a>>b>>x>>y;

	int total = (a*x) + (b*y);

	cout<<total;

	return 0;

}
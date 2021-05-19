/*
 * Yesterday, puppy Tuzik learned a magically efficient method to find the sum of the integers from 1 to N.
 * He denotes it as sum(N).
 * But today, as a true explorer, he defined his own new function: sum(D, N), which means the operation sum applied D times: the first time to N, and each subsequent time to the result of the previous operation.
 * For example, if D = 2 and N = 3, then sum(2, 3) equals to sum(sum(3)) = sum(1 + 2 + 3) = sum(6) = 21.
 */

#include <iostream>
using namespace std;

int sum(int d, int n)
{
	int s = (n*(n+1))/2;
	d--;

	if(d>0)
	{
		sum(d, s);
	}
	else{
		return s;
	}
}

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		int d,s;

		cin>>d>>s;

		cout<<sum(d,s)<<endl;
	}
	return 0;
}
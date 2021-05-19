/*
 * Note that the i-th menu has the price 2i-1 (1 ≤ i ≤ 12).
 * Since Tomya is a pretty girl, she cannot eat a lot.
 * So please find the minimum number of menus whose total price is exactly p.
 * Note that if she orders the same menu twice, then it is considered as two menus are ordered.
 */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		int n;
		int power=11;
		int ans=0;
		cin>>n;

		while(n!=0)
		{
			if(pow(2, power) <= n)
			{
				n-= pow(2, power);
				ans++;
			}

			else
				power--;
		}

		cout<<ans<<endl;
	}
	return 0;
}
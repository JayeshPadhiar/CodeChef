/*
 *  If the soldier is holding an even number of weapons, and "unlucky" otherwise.
 * He considered the army as "READY FOR BATTLE" if the count of "lucky" soldiers is strictly greater than the count of "unlucky" soldiers, and "NOT READY" otherwise.
 */

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int even=0, odd=0;

	for(int i=0; i<n; i++)
	{
		int x;
		cin>>x;

		if(x%2 == 0)
			even++;
		else
			odd++;
	}

	if(even>odd)
		cout<<"READY FOR BATTLE"<<endl;
	else
		cout<<"NOT READY"<<endl;

	return 0;
}
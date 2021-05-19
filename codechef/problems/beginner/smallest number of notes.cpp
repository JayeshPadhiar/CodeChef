/*
 * Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
 * If the sum of Rs. N is input, write a program to computer smallest number of notes that will combine to give Rs. N.
 */

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		int n, ans=0;

		int index=5;
		int notes[] = {1,2,5,10,50,100};

		cin>>n;

		while(n!=0)
		{
			if(notes[index]<=n)
			{
				n -= notes[index];
				ans++;
			}
			else
			{
				index--;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
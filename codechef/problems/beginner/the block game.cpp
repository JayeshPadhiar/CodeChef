/*
 * The citizens of Byteland regularly play a game.
 * They have blocks each denoting some integer from 0 to 9.
 * These are arranged together in a random manner without seeing to form different numbers keeping in mind that the first block is never a 0.
 * Once they form a number they read in the reverse order to check if the number and its reverse is the same.
 * If both are same then the player wins.
 * We call such numbers palindrome.
 */

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		int n;

		cin>>n;

		int num = n;
		int rev=0;

		while(n>0)
		{
			int first = n%10;
			rev = (rev*10)+first;
			n /= 10;
		}

		if(num==rev)
			cout<<"wins"<<endl;
		else
			cout<<"loses"<<endl;
	}
	return 0;
}
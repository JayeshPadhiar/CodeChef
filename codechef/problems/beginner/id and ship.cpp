/*
 * The first line contains an integer T, the total number of testcases.
 * Then T lines follow, each line contains a character.
 */

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		char c;
		cin>>c;

		switch(c)
		{
			case 'b': case 'B':
				cout<<"BattleShip"<<endl;
				break;
			case 'c': case 'C':
				cout<<"Cruiser"<<endl;
				break;
			case 'd': case 'D':
				cout<<"Destroyer"<<endl;
				break;
			case 'f': case 'F':
				cout<<"Frigate"<<endl;
				break;
		}
	}
	return 0;
}
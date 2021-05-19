/*
 * Tanu observed many people on the railways station, and made a list of gestures that they made.
 * Usual "Yes" gesture is recorded as "Y", no as "N" and Indian "Yes" gesture as "I".
 * (Assume no foreigner uses the Indian "Yes" gesture and vice-versa).
 * Identify which of them were Indians, which were not Indian, and which one you cannot be sure about.
 */

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int a=0; a<t; a++)
	{
		int x;
		cin>>x;

		int y=0,n=0,i=0;

		for(int b=0; b<x; b++)
		{
			char c;
			cin>>c;

			if(c == 'Y')
				y++;
			else if(c == 'N')
				n++;
			else if(c == 'I')
				i++;
			else {}
		}

		if(i!=0 && y==0)
			cout<<"INDIAN"<<endl;
		else if(y!=0 && i==0)
			cout<<"NOT INDIAN"<<endl;
		else
			cout<<"NOT SURE"<<endl;
	}
	return 0;
}
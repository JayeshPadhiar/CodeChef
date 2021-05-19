/*
 *
 */

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		int h, t;
		double cc;

		cin>>h>>cc>>t;

		if(h>50 && cc<0.7 && t>5600)
			cout<<"10"<<endl;
		else if(h>50 && cc<0.7 && t<=5600)
			cout<<"9"<<endl;
		else if(h<=50 && cc<0.7 && t>5600)
			cout<<"8"<<endl;
		else if(h>50 && cc>=0.7 && t>5600)
			cout<<"7"<<endl;
		else if(h<=50 && cc>=0.7 && t<=5600)
			cout<<"5"<<endl;
		else
			cout<<"6"<<endl;
	}
	return 0;
}
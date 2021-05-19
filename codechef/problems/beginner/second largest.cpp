/*
 * Three numbers A, B and C are the inputs. Write a program to find second largest among them.
 */

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		int arr[3];
		cin>>arr[0]>>arr[1]>>arr[2];

		int lar = arr[0], sec=-1;

		for(int j=0; j<3; j++)
		{
			if (arr[j] > lar){
				sec = lar;
				lar = arr[j];
			}

			else if (arr[j]<lar && arr[j]>sec)
				sec = arr[j];
		}

		cout<<sec<<endl;
	}

	return 0;

}
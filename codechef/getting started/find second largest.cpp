/*
 * Given three distinct integers A, B and C, print the second largest number among them.
 */
#include <iostream>
using namespace std;

int main()
{
	int n=3;
	int arr[3];

	cin>>arr[0]>>arr[1]>>arr[2];

	int large = arr[0], sec_large;

	for(int i=0; i<n; i++)
	{
		if(arr[i] > large)
		{
			sec_large = large;
			large = arr[i];
		}else if (arr[i]>sec_large && arr[i]<large)
		{
			sec_large = arr[i];
		}
	}

	cout<<sec_large;

	return 0;

}
/*
 * The purpose of this problem is to verify whether the method you are using to read input data is sufficiently fast to handle problems branded with the enormous Input/Output warning.
 * You are expected to be able to process at least 2.5MB of input data per second at runtime.
 */

// Usually, you can use scanf/printf in C++.
// However, if you want to use cin/cout, it is usually slow.
// To make it faster. Use cin.tie(NULL) and set ios_base::sync_with_stdio(false)
// See the below code for details.

#include <iostream>
using namespace std;

int main()
{

	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);

	int n, k;
	int total=0;

	cin>>n>>k;

	for(int i=0; i<n; i++)
	{
		long int x;
		cin>>x;

		if(x%k == 0)
			total++;
	}

	cout<<total<<endl;

	return 0;

}
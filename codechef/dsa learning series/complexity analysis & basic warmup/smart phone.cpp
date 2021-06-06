/*
 * You want to fix a price so that the revenue you earn from the app is maximized.
 * Find this maximum possible revenue.
 * For instance, suppose you have 4 potential customers and their budgets are 30, 20, 53 and 14.
 * In this case, the maximum revenue you can get is 60 .
 */

#include <iostream>
using namespace std;

void swap(long long int *a, long long int *b)
{
	long long int temp = *a;
	*a = *b;
	*b = temp;
}

void merge(long long int arr[], int left, int mid, int right)
{
	int lsize = mid-left+1;
	int rsize = right-mid;

	long long int L[lsize], R[rsize];

	for(int i=0; i<lsize; i++)
		L[i] = arr[left+i];

	for(int i=0; i<rsize; i++)
		R[i] = arr[mid+i+1];

	int i=0, j=0;
	int k=left;

	while(i<lsize && j<rsize)
	{
		if(L[i] < R[j])
		{
			arr[k] = L[i];
			i++;
		}else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while(i<lsize)
	{
		arr[k] = arr[i];
		i++;
		k++;
	}

	while(j<rsize)
	{
		arr[k] = arr[j];
		j++;
		k++;
	}
}

void mergesort(long long int arr[], int left, int right)
{
	if(left < right)
	{
		int mid = left+(right-left)/2;
		mergesort(arr, left, mid);
		mergesort(arr, mid+1, right);
		merge(arr, left, mid, right);
	}
}

int main()
{
	int n;
	long long int budget[500000] = {};
	long long int maxrev = 0;
	cin>>n;

	for(int i=0; i<n; i++)
	{
		cin>>budget[i];
	}

	mergesort(budget, 0, n-1);

	/*for(int i=0; i<n-1; i++)
		for(int j=0; j<n-1; j++)
			if(budget[j] > budget[j+1])
				swap(&budget[j], &budget[j+1]);
	*/

	for(int i=0; i<n; i++)
	{
		if(budget[i]*(n-i) > maxrev)
			maxrev = budget[i]*(n-i);
	}

	cout<<maxrev<<endl;

	return 0;
}
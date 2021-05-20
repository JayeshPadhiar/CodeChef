/*
 * For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency.
 * Also, abccab, rotor and xyzxy are a few examples of lapindromes.
 * Note that abbaab is NOT a lapindrome.
 * The two halves contain the same characters but their frequencies do not match.
 * Your task is simple.
 * Given a string, you need to tell if it is a lapindrome.
 */

#include <iostream>
using namespace std;

void swap(char *a, char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int size, char arr[])
{

	for(int i=0; i<size-1; i++)
	{
		for(int j=0; j<size-1; j++)
		{
			if(arr[j]>arr[j+1])
				swap(&arr[j], &arr[j+1]);
		}
	}
}

void evaluate(char a[], char b[])
{
	int p = 0;
	bool equal = true;
	while(a[p] != '\0' || b[p]!='\0')
	{
		if(a[p] != b[p])
		{
			equal = false;
			break;
		}
		p++;
	}

	if(equal)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

}

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		char str[1000];
		cin>>str;

		int size=0;
		while(str[size] != '\0')
			size++;

		if(size%2 != 0)
		{
			char a[(size/2)+1] = {}, b[(size/2)+1]= {};

			for(int j=0; j<(size/2); j++)
				a[j] = str[j];

			a[(size/2)+1] = '\0';

			for(int k=0; k<(size/2); k++)
				b[k] = str[(size/2)+k+1];

			b[(size/2)+1] = '\0';

			sort(size/2, a);
			sort(size/2, b);

			evaluate(a,b);
		}
		else{

			char a[(size/2)+1] = {}, b[(size/2)+1]= {};

			for(int j=0; j<(size/2); j++)
				a[j] = str[j];

			a[(size/2)+1] = '\0';

			for(int k=0; k<(size/2); k++)
				b[k] = str[(size/2)+k];

			b[(size/2)+1] = '\0';

			sort(size/2, a);
			sort(size/2, b);

			evaluate(a,b);
		}
	}
	return 0;

}
/*
 * In a company an emplopyee is paid as under: If his basic salary is less than Rs. 1500, then HRA = 10% of base salary and DA = 90% of basic salary.
 * If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary.
 * If the Employee's salary is input, write a program to find his gross salary.
 */

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	for(int i=0; i<t; i++)
	{
		double sal;

		cin>>sal;

		double hra = (sal<1500)? (sal/10): 500;
		double da = (sal<1500)? ((90*sal)/100): ((98*sal)/100);

		printf("%.2lf\n", (sal+hra+da));
	}
	return 0;
}
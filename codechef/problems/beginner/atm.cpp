/*
 * Pooja would like to withdraw X $US from an ATM.
 * The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges).
 * For each successful withdrawal the bank charges 0.50 $US.
 * Calculate Pooja's account balance after an attempted transaction.
 */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double balance;
	double amount;

	cin>>amount>>balance;

	if(amount < balance)
	{
		if(fmod(amount, 5) == 0.0  && balance >= (amount + 0.50))
			balance -=(amount + 0.50);
	}

	//cout<<balance<<endl;
	printf("%.2f\n", balance);

	return 0;

}
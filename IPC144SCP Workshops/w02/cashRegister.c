/*
	 Name:      Rishit Patel
	 Student#:  A00089000
	 Section:   IPC144SCP
	 email:     rspatel21@myseneca.ca
*/
// Start your code below:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	double total = 0;
	int dollars = 0;
	int quarters = 0;
	double owing = 0;
	double owing2 = 0;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &total);
	dollars = total;
	owing = total - dollars;
	quarters = (total - dollars) * 100 / 25;
	owing2 = owing - quarters * .25;

	printf("Loonies required: %d, balance owing $%.2lf\n", dollars, owing);
	printf("Quarters required: %d, balance owing $%.2lf\n", quarters, owing2);
	return 0;
}

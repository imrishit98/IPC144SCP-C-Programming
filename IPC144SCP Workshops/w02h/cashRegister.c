/*
	 Name:      Rishit Patel
	 Student#:  A00089000
	 Section:   IPC144SCP
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double total = 0;
	double gst = 0;
	int cents;
	int ans;
	double owed = 0;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &total);

	gst = total * .13 + .005;
	owed = total + gst;
	printf("GST: %.2lf\n", gst);
	printf("Balance owing: $%.2lf\n", owed);
	cents = owed * 100 + 0.5;

	ans = cents / 100;
	cents = cents % 100;
	printf("Loonies required: %d, balance owing $%.2lf\n", ans, cents / 100.0);

	ans = cents / 25;
	cents = cents % 25;
	printf("Quarters required: %d, balance owing $%.2lf\n", ans, cents / 100.0);

	ans = cents / 10;
	cents = cents % 10;
	printf("Dimes required: %d, balance owing $%.2lf\n", ans, cents / 100.0);

	ans = cents / 5;
	cents = cents % 5;
	printf("Nickels required: %d, balance owing $%.2lf\n", ans, cents / 100.0);

	ans = cents / 1;
	cents = cents % 1;
	printf("Pennies required: %d, balance owing $%.2lf\n", ans, cents / 100.0);

	return 0;

}

// Paste your in-lab code below and upgrade it to the at-home specifications


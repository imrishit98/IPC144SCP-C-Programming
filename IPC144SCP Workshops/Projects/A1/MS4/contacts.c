/* -------------------------------------------
Name: Rishit Patel
Student number: A00089000
Email: rspatel21@myseneca.ca
Section: IPC144SCP
Date: 10/11/2018
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"

// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:
void getName(struct Contact *contact) {
	char yn;
	printf("Please enter the contact's first name: ");
	scanf(" %[^\n]s", contact[1].name.firstName);
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &yn);
	if (yn == 'y' || yn == 'Y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %[^\n]s", contact[1].name.middleInitial);
	}
	printf("Please enter the contact's last name: ");
	scanf(" %[^\n]s", contact[1].name.lastName);
};



// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:
void getAddress(struct Contact *contact) {
	char yn;
	printf("Please enter the contact's street number: ");
	scanf("%d", &contact[1].address.streetNumber);
	printf("Please enter the contact's street name: ");
	scanf(" %[^\n]s", contact[1].address.street);
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &yn);
	if (yn == 'y' || yn == 'Y') {
		printf("Please enter the contact's apartment number: ");
		scanf("%d", &contact[1].address.apartmentNumber);
	}
	printf("Please enter the contact's postal code: ");
	scanf(" %[^\n]s", contact[1].address.postalCode);
	printf("Please enter the contact's city: ");
	scanf(" %[^\n]s", contact[1].address.city);
};


// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
void getNumbers(struct Contact *contact) {
	char yn;
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &yn);
	if (yn == 'y' || yn == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf(" %[^\n]s", contact[1].numbers.cell);
	}
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &yn);
	if (yn == 'y' || yn == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf(" %[^\n]s", contact[1].numbers.home);
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &yn);
	if (yn == 'y' || yn == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf(" %[^\n]s", contact[1].numbers.business);
	}
};
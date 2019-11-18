/* -------------------------------------------
Name: Rishit Patel
Student number: A00089000
Email: rspatel21@myseneca.ca
Section: IPC144SCP
Date: 14/12/2018
----------------------------------------------
Assignment: 2
Milestone:  3
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+




// +---------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2   |
// |        function definitions below...              |
// |                                                   |
// | *** See hint regarding the getNumbers function    |
// +---------------------------------------------------+


// getName:
void getName(struct Name *name) {

	int option;
	printf("Please enter the contact's first name: ");
	scanf("%30[^\n]", (*name).firstName);
	clearKeyboard();
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	option = yes();

	if (option == 1) {
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6[^\n]", (*name).middleInitial);
		clearKeyboard();
	}
	printf("Please enter the contact's last name: ");
	scanf("%35[^\n]", (*name).lastName);
	clearKeyboard();
};


// getAddress:
void getAddress(struct Address *address) {
	char option;

	printf("Please enter the contact's street number: ");
	(*address).streetNumber = getInt();
	while ((*address).streetNumber < 0) {
		printf("*** INVALID STREET NUMBER *** <must be a positive number>: ");
		(*address).streetNumber = getInt();
	}
	printf("Please enter the contact's street name: ");
	scanf("%41[^\n]", (*address).street);
	clearKeyboard();
	printf("Do you want to enter an apartment number? (y or n): ");
	option = yes();
	if (option == 1) {
		printf("Please enter the contact's apartment number: ");
		(*address).apartmentNumber = getInt();
		while ((*address).apartmentNumber < 0) {
			printf("*** INVALID APARTMENT NUMBER *** <must be a positive number>: ");
			(*address).apartmentNumber = getInt();
		}
	}
	printf("Please enter the contact's postal code: ");
	scanf("%7[^\n]", (*address).postalCode);
	clearKeyboard();
	printf("Please enter the contact's city: ");
	scanf("%40[^\n]", (*address).city);
	clearKeyboard();
};


// getNumbers:
// HINT:  Update this function to use the new helper 
//        function "getTenDigitPhone" where applicable
void getNumbers(struct Numbers *numbers) {
	char option;
	printf("Please enter the contact's cell phone number: ");
	scanf("%11[^\n]", (*numbers).cell);
	clearKeyboard();
	printf("Do you want to enter a home phone number? (y or n): ");
	option = yes();
	if (option == 1) {
		printf("Please enter the contact's home phone number: ");
		scanf("%11[^\n]", (*numbers).home);
		clearKeyboard();
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	option = yes();
	if (option == 1) {
		printf("Please enter the contact's business phone number: ");
		scanf("%11[^\n]", (*numbers).business);
		clearKeyboard();
	}
};


// getContact
void getContact(struct Contact *contact) {
	getName(&(*contact).name);
	getAddress(&(*contact).address);
	getNumbers(&(*contact).numbers);
};

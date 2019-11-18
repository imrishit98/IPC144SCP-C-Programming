/* -------------------------------------------
Name: Rishit Patel
Student number: A00089000
Email: rspatel21@myseneca.ca
Section: IPCSCP144
Date: 05/11/2018
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"

int main (void)
{
    // Declare variables here:
	struct Name contact[] = { {{0}} };
	struct Address houseadd[] = { {0} };
	struct Numbers phoneno[] = { {{0}} };
	char yn;
	int i = 0;



    // Display the title
	printf("Contact Management System\n");
	printf("-------------------------\n");

    // Contact Name Input:
	printf("Please enter the contact's first name: ");
	scanf(" %[^\n]s", contact[i].firstName);
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &yn);
	if (yn == 'y' || yn == 'Y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %[^\n]s", contact[i].middleInitial);
	}
	printf("Please enter the contact's last name: ");
	scanf(" %[^\n]s", contact[i].lastName);

		// Contact Address Input:
	printf("Please enter the contact's street number: ");
	scanf("%d", &houseadd[i].streetNumber);
	printf("Please enter the contact's street name: ");
	scanf(" %[^\n]s", houseadd[i].street);
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &yn);
	if (yn == 'y' || yn == 'Y') {
		printf("Please enter the contact's apartment number: ");
		scanf("%d", &houseadd[i].apartmentNumber);
	}
	printf("Please enter the contact's postal code: ");
	scanf(" %[^\n]s", houseadd[i].postalCode);
	printf("Please enter the contact's city: ");
	scanf(" %[^\n]s", houseadd[i].city);


		// Contact Numbers Input:
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &yn);
	if (yn == 'y' || yn == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf(" %[^\n]s", phoneno[i].cell);
	}
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &yn);
	if (yn == 'y' || yn == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf(" %[^\n]s", phoneno[i].home);
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &yn);
	if (yn == 'y' || yn == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf(" %[^\n]s", phoneno[i].business);
	}

    // Display Contact Summary Details
	printf("\nContact Details\n");
	printf("---------------\n");
	printf("Name Details\n");
	printf("First name: %s\n",contact[i].firstName);
	printf("Middle initial(s): %s\n", contact[i].middleInitial);
	printf("Last name: %s\n", contact[i].lastName);
	printf("\nAddress Details\n");
	printf("Street number: %d\n", houseadd[i].streetNumber);
	printf("Street name: %s\n", houseadd[i].street);
	printf("Apartment: %d\n", houseadd[i].apartmentNumber);
	printf("Postal code: %s\n", houseadd[i].postalCode);
	printf("City: %s\n", houseadd[i].city);
	printf("\nPhone Numbers:\n");
	printf("Cell phone number: %s\n", phoneno[i].cell);
	printf("Home phone number: %s\n", phoneno[i].home);
	printf("Business phone number: %s\n", phoneno[i].business);


    // Display Completion Message
	printf("\nStructure test for Name, Address, and Numbers Done!\n");


    return 0;
}

/*  SAMPLE OUTPUT:
    
    Contact Management System
    -------------------------
    Please enter the contact's first name: Tom
    Do you want to enter a middle initial(s)? (y or n): y
    Please enter the contact's middle initial(s): L. A.
    Please enter the contact's last name: Wong Song
    Please enter the contact's street number: 20
    Please enter the contact's street name: Keele Street
    Do you want to enter an apartment number? (y or n): y
    Please enter the contact's apartment number: 40
    Please enter the contact's postal code: A8A 4J4
    Please enter the contact's city: North York
    Do you want to enter a cell phone number? (y or n): Y
    Please enter the contact's cell phone number: 9051116666
    Do you want to enter a home phone number? (y or n): Y
    Please enter the contact's home phone number: 7052227777
    Do you want to enter a business phone number? (y or n): Y
    Please enter the contact's business phone number: 4163338888

    Contact Details
    ---------------
    Name Details
    First name: Tom
    Middle initial(s): L. A.
    Last name: Wong Song

    Address Details
    Street number: 20
    Street name: Keele Street
    Apartment: 40
    Postal code: A8A 4J4
    City: North York

    Phone Numbers:
    Cell phone number: 9051116666
    Home phone number: 7052227777
    Business phone number: 4163338888

    Structure test for Name, Address, and Numbers Done!
*/
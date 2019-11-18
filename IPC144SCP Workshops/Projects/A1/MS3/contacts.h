/* -------------------------------------------
Name: Rishit Patel
Student number: A00089000
Email: rspatel21@myseneca.ca
Section: IPC144SCP
Date: 07/11/2018
----------------------------------------------
Assignment: 1
Milestone:  3
---------------------------------------------- */
#ifndef SICT_CONTACTS_H__
#define SICT_CONTACTS_H__
#endif // ! SICT_CONTACTS_H__
// Structure type Name declaration
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration
// Place your code from Milestone #2 here...
struct Address {
	unsigned int streetNumber;
	char street[41];
	unsigned int apartmentNumber;
	char postalCode[8];
	char city[41];

// Structure type Numbers declaration
// Place your code from Milestone #2 here...
	struct Numbers {
		char cell[11];
		char home[11];
		char business[11];
	};

// Structure type Contact declaration
// Place your code here...
	struct Contact {
	struct Name name;
	struct Address address;
	struct Numbers numbers;
	};

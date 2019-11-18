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
#ifndef SICT_CONTACTS_H__
#define SICT_CONTACTS_H__
// Structure type Name declaration (Milestone 1)
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration 
// Place your code here... (from Milestone 1)
struct Address {
	unsigned int streetNumber;
	char street[41];
	unsigned int apartmentNumber;
	char postalCode[8];
	char city[41];
};


// Structure type Numbers declaration
// Place your code here... (from Milestone 1)
	struct Numbers {
		char cell[11];
		char home[11];
		char business[11];
	};



// Structure type Contact declaration
// Place your code here... (from Milestone 3)
	struct Contact {
		struct Name name;
		struct Address address;
		struct Numbers numbers;
	};



//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// ====== Milestone 4 =======

// Get and store from standard input the values for Name
// Place your code here...
	void getName(struct Contact *);

// Get and store from standard input the values for Address
// Place your code here...
	void getAddress(struct Contact *);

// Get and store from standard input the values for Numbers
// Place your code here...
	void getNumbers(struct Contact *);

#endif // !SICT_CONTACTS_H__
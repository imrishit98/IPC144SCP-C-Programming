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

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:
#include <string.h>


// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:
#include "contactHelpers.h"


//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard:
void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block on purpose
};

// pause:
void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt:
int getInt(void)
{
	char NL = 'x';
	int Value;
	scanf("%d%c", &Value, &NL);
	while (NL != '\n') {
		clearKeyboard();
		printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		scanf("%d%c", &Value, &NL);
	}
	return Value;
}

// getIntInRange:
int getIntInRange(int min, int max)
{
	int Value = 0;
	int bad;
	do {
		bad = 0;
		Value = getInt();
		if (Value < min || Value > max) {
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
			bad = 1;
		}
	} while (bad);
	return Value;
}


// yes:
int yes()
{
	int yes;
	char ans;
	char NL = 'x';
	while (NL != '\n') {
		scanf("%c%c", &ans, &NL);
		if (NL != '\n') {
			clearKeyboard();
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		}
		else if (ans == 'y' || ans == 'Y') {
			yes = 1;
		}
		else if (ans == 'n' || ans == 'N') {
			yes = 0;
		}
		else {
			NL = 'x';
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		}
	}
	return yes;
}


// menu:
int menu(void)
{
	int selected;
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\n");
	printf("Select an option:> ");
	selected = getIntInRange(0, 6);
	return selected;
}

// contactManagerSystem:
void contactManagerSystem(void)
{
	int	done = 0;
	int feature;
	while (done == 0) {
		feature = menu();
		switch (feature)
		{
		case 1:
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 2:
			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 3:
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 4:
			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 5:
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 6:
			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 0:
			printf("\nExit the program? (Y)es/(N)o: ");
			done = yes();
			printf("\n");
			break;
		}

	}
	printf("Contact Management System: terminated\n");
}

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (ensures 10-digit chars entered)
// ---------------------------------------------------------------------------------
// NOTE: Modify this function to validate only numeric character digits are entered
// ---------------------------------------------------------------------------------
void getTenDigitPhone(char telNum[])
{
    int needInput = 1;

    while (needInput == 1) {
        scanf("%10s", telNum);
        clearKeyboard();

        // (String Length Function: validate entry of 10 characters)
        if (strlen(telNum) == 10)
			for (int i = 0; telNum[i] != 10; i++) {
				if (telNum[i] >= '0' || telNum[i] <= '9')
					needInput = 0;
				else
					needInput = 1;
				printf("Enter a 10-digit phone number: ");
				break;
			}
		else
			printf("Enter a 10-digit phone number: ");
    }
}

// findContactIndex:
int findContactIndex(const struct Contact contacts[], int size, const char cellNum[])
{
    return -1;
}


// displayContactHeader
// Put empty function definition below:
void displayContactHeader(void)
{

}

// displayContactFooter
// Put empty function definition below:
void displayContactFooter(int)
{

}


// displayContact:
// Put empty function definition below:
void displayContact(const struct Contact*)
{

}


// displayContacts:
// Put empty function definition below:
void displayContacts(const struct Contact[], int)
{

}


// searchContacts:
// Put empty function definition below:
void searchContacts(const struct Contact[], int)
{

}


// addContact:
// Put empty function definition below:
void addContact(struct Contact[], int)
{

}


// updateContact:
// Put empty function definition below:
void updateContact(struct Contact[], int)
{

}


// deleteContact:
// Put empty function definition below:
void deleteContact(struct Contact[], int)
{

}


// sortContacts:
// Put empty function definition below:
void sortContact(struct Contact[], int)
{

}
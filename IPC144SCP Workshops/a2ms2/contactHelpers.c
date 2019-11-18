/* -------------------------------------------
Name: Rishit Patel
Student number: A00089000
Email: rspatel21@myseneca.ca
Section: IPC144SCP
Date: 18/11/2018
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:
#include "contactHelpers.h"

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n')   ; // empty execution code block on purpose
};

// pause function definition goes here:
void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt function definition goes here:
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


// getIntInRange function definition goes here:
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


// yes function definition goes here:
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

// menu function definition goes here:
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
	selected = getIntInRange(0,6);
	return selected;
}

// contactManagerSystem function definition goes here:
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
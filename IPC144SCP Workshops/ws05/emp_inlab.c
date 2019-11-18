/*
Name: Rishit Patel
Student number: A00089000
Email: rspatel21@myseneca.ca
Workshop: Workshop 5 Lab
Section: IPC144SCP
Date: 17/10/18
*/

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 2
#include <stdio.h>


struct Employee {
	int ID, age;
	double salary;
};

int main(void) {
	int option = 0;
	int numemp = 0;
	int cnt = 0;
	// Declare a struct Employee array "emp" with SIZE elements 
	// and initialize all elements to zero
	struct Employee emp[SIZE] = { {0} };

	printf("---=== EMPLOYEE DATA ===---\n\n");

	do {
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		// Capture input to option variable

		scanf("%d", &option);
		printf("\n");

		switch (option) 
		{

		case 0:
			printf("Exiting Employee Data Program. Good Bye!!!\n");
			break;

		case 1:
			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			// Use "%6d%9d%11.2lf" formatting in a   
			// printf statement to display
			// employee id, age and salary of 
			// all  employees using a loop construct 

			// The loop construct will be run for SIZE times 
			// and will only display Employee data 
			// where the EmployeeID is > 0

			for (cnt = 0; cnt < numemp; cnt++) 
			{
				printf("%6d%9d%11.2lf\n", emp[cnt].ID, emp[cnt].age, emp[cnt].salary);
			}
			printf("\n");
			break;

		case 2:	// Adding Employee
				// @IN-LAB

			printf("Adding Employee\n");
			printf("===============\n");

			// Check for limits on the array and add employee 
			// data accordingly. 

			if (numemp < SIZE) 
			{
				printf("Enter Employee ID: ");
				scanf("%d", &emp[cnt].ID);

				printf("Enter Employee Age: ");
				scanf("%d", &emp[cnt].age);

				printf("Enter Employee Salary: ");
				scanf("%11lf", &emp[cnt].salary);
				printf("\n");

				numemp++;
				cnt++;

			}
			else
				printf("ERROR!!! Maximum Number of Employees Reached\n\n");

			break;

		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);

	return 0;
}



//PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 111
Enter Employee Age: 34
Enter Employee Salary: 78980.88

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 112
Enter Employee Age: 41
Enter Employee Salary: 65000

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
   111       34   78980.88
   112       41   65000.00

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!

*/
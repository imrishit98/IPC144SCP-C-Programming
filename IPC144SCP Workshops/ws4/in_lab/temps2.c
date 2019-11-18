//--------------------------------------------------
// Name: Rishit Patel           
// Student Number: A00089000
// Email: rspatel21@myseneca.ca         
// Section: IPC144SCP        
// Workshop: Workshop 4 in_lab    
//--------------------------------------------------

// Place your code below

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, days;
	int high[10], low[10];

	printf("---=== IPC Temperature Calculator v2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("\n%d", &days);

	while (days > 10 || days < 3)
	{
		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &days);
		printf("\n");
	}
	for (i = 0; i < days; i++)
	{
		printf("Day %d - High: ", i + 1);
		scanf("%d", &high[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &low[i]);

		while (high[i] < low[i])
		{
			printf("Invalid entry, High must be greater than Low\n");
			printf("Day %d - High: ", i + 1);
			scanf("%d", &high[i]);
			printf("\nDay %d - Low: ", i + 1);
			scanf("%d", &low[i]);
	
		}

	}
	printf("\nDay  Hi  Low\n");
	for (i = 0; i < days; i++)
	{
		printf("%d    %d    %d\n", i + 1, high[i], low[i]);
	}

	return 0;
}



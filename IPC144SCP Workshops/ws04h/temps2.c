//--------------------------------------------------
// Name: Rishit Patel           
// Student Number: A00089000
// Email: rspatel21@myseneca.ca         
// Section: IPC144SCP        
// Workshop: Workshop 4 in_home    
//--------------------------------------------------

// Place your code below

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, days;
	int high[10], low[10];
	int max = 0, min = 0;
	int dayp = 0, dayn = 0;
	int avgdays = 1;
	double avg, avg2;
	double total;
	double sum;

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("\n%d", &days);
	printf("\n");

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

	for (i = 0; high[i] > low[i]; i++)
	{
		if (high[i] > max)
		{
			max = high[i];
			dayp = i + 1;
		}
	}

	printf("\nThe highest temperature was %d, on day %d\n", max, dayp);

	for (i = 0; low[i] < high[i]; i++)
	{
		if (low[i] < min)
		{
			min = low[i];
			dayn = i + 1;
		}
	}

	printf("The lowest temperature was %d, on day %d\n", min, dayn);

	while (avgdays > 0)
	{
		printf("\nEnter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", days);
		scanf("%d", &avgdays);
		if (avgdays < 0) {
			printf("\nGoodbye!\n");
			break;
		}
		while (avgdays < 1 || avgdays > days) {
			if (avgdays < 0) {
				printf("\nGoodbye!\n");
				break;
			}
			printf("\nInvalid entry, please enter a number between 1 and %d, inclusive: ", days);
			scanf("%d", &avgdays);
		}
		total = 0;
		for (i = 0; i < avgdays; i++) {
			sum = (high[i] + low[i]);
			avg2 = sum / 2;
			total = total + avg2;
		}
		avg = (total / avgdays);
		printf("\nThe average temperature up to day %d is: %.2lf\n", avgdays, avg);
	}

	return 0;
}



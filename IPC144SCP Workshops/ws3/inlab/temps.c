// Name: Rishit Patel
// Student Number: A00089000
// Email: rspatel21@myseneca.ca
// Section: IPC144SCP
// Workshop: Workshop 3 in_lab

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:

#include <stdio.h>
#define NUMS 3
int main(void) 
{
	int i;
	int hightotal = 0, lowtotal = 0;
	int high[3], low[3];
	double avg;

	printf("---=== IPC Temperature Analyzer ===---\n");

	for (i = 0; i < NUMS; i++)
	{

		printf("Enter the high value for day %d: ", i + 1);
		scanf("%d", &high[i]);
		printf("\n");

		printf("Enter the low value for day %d: ", i + 1);
		scanf("%d", &low[i]);
		printf("\n");

		while (high[i] > low[i] && high[i]<40 && high[i]>-40 && low[i] > -40)
		{
			hightotal = hightotal + high[i];
			lowtotal = lowtotal + low[i];
			break;
		}

		while (high[i] < low[i] || high[i]>40 || high[i] < -40 || low[i] < -40)
		{
			printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("\n");

			printf("Enter the high value for day %d: ", i + 1);
			scanf("%d", &high[i]);
			printf("\n");

			printf("Enter the low value for day %d: ", i + 1);
			scanf("%d", &low[i]);
			printf("\n");

			while (high[i] > low[i] && high[i]<40 && high[i]>-40 && low[i] > -40)
			{
				hightotal = hightotal + high[i];
				lowtotal = lowtotal + low[i];
				break;
			}
		}
		avg = (hightotal + lowtotal) / (NUMS * 2.0);
	}
	
	printf("The average (mean) temperature was: %.2lf\n", avg);
	return 0;
}	
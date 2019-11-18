// Name: Rishit Patel
// Student Number: A00089000
// Email: rspatel21@myseneca.ca
// Section: IPC144SCP
// Workshop: Workshop 3 in_home

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:

#include <stdio.h>
#define NUMS 4
int main(void)
{
	int i;
	int hightotal = 0, lowtotal = 0;
	int high[4], low[4];
	double avg;
	int max = 0, min = 0;
	int dayp = 0, dayn = 0;

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
			printf("Incorrect values, tempratures must be in the range -40 to 40, high must be greater than low.\n");

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

	for (i = 0; high[i] > low[i]; i++) 
	{
		if (high[i] > max) 
		{
			max = high[i];
			dayp = i + 1;
		}
	}

	printf("The highest temperature was %d, on day %d\n", max, dayp);

	for (i = 0; low[i] < high[i]; i++)
	{
		if (low[i] < min)
		{
			min = low[i];
			dayn = i + 1;
		}
	}

	printf("The lowest temperature was %d, on day %d\n", min, dayn);


	return 0;
}
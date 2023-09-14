#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main()
{
	int list[SIZE];
	int b, temp;

	// Seed the randomizer
	srand((unsigned)time(NULL));

	// Build and display the random values
	printf("%d random values, unsorted:\n", SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		list[i] = rand() % 100 + 1; // values from 1 to 100
		printf("%4d", list[i]);
	}
	putchar('\n');

	// Perform the bubble sort
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			// If a > b, swap the values
			if (list[i] > list[j])
			{
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	// Display the sorted list
	printf("%d random values, sorted:\n", SIZE);
	for (int i = 0; i < SIZE; i++)
		printf("%4d", list[i]);
	putchar('\n');

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// int makearray[](void)
// {
// 	int static array[5];
// 	int x;

// 	for (x = 0; x < 5; x++)
// 		array[x] = rand() % 10 + 1;

// 	return (array);
// }

void makearray(int *array, int size)
{
	for (int x = 0; x < size; x++)
		array[x] = rand() % 10 + 1;
}

int main()
{
	int x, r[5];

	srand((unsigned)time(NULL));
	puts("Here are your 5 random numbers:");
	// r = makearray();
	makearray(&r[0], 5); // Pass the address of the first element of the array

	for (x = 0; x < 5; x++)
		printf("%d\n", r[x]);

	return (0);
}

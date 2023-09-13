#include <stdio.h>

int main()
{
	char *veeps[5] = {"Adams", "Jefferson", "Burr", "Clinton", "Gerry"};

	// Swap 2 and 3
	char *temp;
	temp = veeps[1];
	veeps[1] = veeps[2];
	veeps[2] = temp;

	for (int i = 0; i < 5; i++)
		printf("%s\n", *(veeps + i));

	return (0);
}

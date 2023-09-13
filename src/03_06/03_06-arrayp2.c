#include <stdio.h>

int main()
{
	char *veeps[5] = {"Adams", "Jefferson", "Burr", "Clinton", "Gerry"};

	for (int i = 0; i < 5; i++)
		printf("%s\n", *(veeps + i));

	return (0);
}

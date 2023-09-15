#include <stdio.h>
#include <dirent.h>

int main()
{
	DIR *directory;

	// Open the directory
	directory = opendir(".");
	if (directory == NULL)
	{
		puts("Unable to open current directory");
		return (1);
	}

	// Do something
	puts("Opened current directory");

	// Close the directory
	closedir(directory);

	return (0);
}

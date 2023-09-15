#include <stdio.h>
#include <dirent.h>

int main()
{
	DIR *directory;
	struct dirent *file;

	// Open the directory
	directory = opendir(".");
	if (directory == NULL)
	{
		puts("Unable to open current directory");
		return (1);
	}

	// Do something
	file = readdir(directory);
	printf("Found the file %s\n", file->d_name);

	// Close the directory
	closedir(directory);

	return (0);
}

#include "main.h"
/**
 *read_textfile - reads a text file and prints to stdout
 *@filename:the file
 *@letters:number of letters to print
 *
 *Return:total bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	size_t br;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (-1);
	}
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		return (0);
	}
	br = fread(buffer, 1, letters, fp);
	fclose(fp);
	if (br > 0)
	{
		write(STDOUT_FILENO, buffer, br);
	}
	free(buffer);
	return (br);
}

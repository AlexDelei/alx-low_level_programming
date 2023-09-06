#include "main.h"
/**
 *main - copies content of a file to another
 *@argc: arguement count
 *@argv: arguement array
 *Return: 0 value
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
	{
		handleError("Usage: %s file_from file_to\n", 97);
	}
	copyFile(file_from, file_to);
	return (0);
}

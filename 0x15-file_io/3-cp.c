#include "main.h"
/**
 *main - copies content of a file to another
 *@argc: arguement count
 *@argv: arguement array
 *Return: 0 value
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1], *file_to = argv[2];
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		handle_error(97, NULL);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		handle_error(98, file_from);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		handle_error(99, file_to);
	}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			handle_error(99, file_to);
		}
	}
	if (bytes_read == -1)
	{
		handle_error(98, file_from);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		handle_error(100, (close(fd_from) == -1) ? file_from : file_to);
	}
	if (chmod(file_to, 0664) == -1)
	{
		handle_error(95, file_to);
	}
	return (0);
}

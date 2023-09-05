#include "main.h"
/**
 *main - displays the information contained in the ELF
 *@argc: arguement count
 *@argv: arguement array
 *Return: 0 success value
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	unsigned char elf_header[ELF_HEADER_SIZE];
	size_t bytes_read;

	if (argc != 2)
	{
		printf("Usage: elf_header elf_filename\n");
		return (1);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Could not open file '%s'\n", argv[1]);
		return (1);
	}
	if (lseek(fileno(fp), 0, SEEK_SET) < 0)
	{
		printf("Could not seek to start of file\n");
		return (1);
	}
	bytes_read = read(fileno(fp), elf_header, ELF_HEADER_SIZE);
	if (bytes_read != ELF_HEADER_SIZE)
	{
		printf("Could not read ELF header\n");
		return (1);
	}
	printf("Magic: 0x%x\n", elf_header[0] << 8 | elf_header[1]);
	printf("Class: %d\n", elf_header[4]);
	printf("Data: %d\n", elf_header[5]);
	printf("Version: %d\n", elf_header[6] << 8 | elf_header[7]);
	printf("OS/ABI: %d\n", elf_header[8] << 8 | elf_header[9]);
	printf("ABI Version: %d\n", elf_header[10] << 8 | elf_header[11]);
	printf("Type: %d\n", elf_header[12] << 8 | elf_header[13]);
	printf("Entry point address: 0x%x\n", elf_header[16] << 24 | elf_header[17] << 16 | elf_header[18] << 8 | elf_header[19]);
	fclose(fp);
	return (0);
}

#include "main.h"
/**
 *display_elf_header_info - elf info
 *@header:head of what
 */
void display_elf_header_info(ElfHeader *header)
{
printf("ELF Header:\n");
printf("  Magic:   %.2x %.2x %.2x %.2x\n", header->magic[0], header->magic[1], header->magic[2], header->magic[3]);
printf("  Class:                         %s\n", header->class == 1 ? "ELF32" : "ELF64");
printf("  Data:                          %s\n", header->data == 1 ? "2's complement, little endian" : "2's complement, big endian");
printf("  Version:                       %u (current)\n", header->version);
printf("  OS/ABI:                        %u\n", header->os_abi);
printf("  ABI Version:                   %u\n", header->abi_version);
printf("  Type:                          0x%.4x\n", header->type);
printf("  Machine:                       0x%.4x\n", header->machine);
printf("  Version:                       0x%.8x\n", header->version2);
printf("  Entry point address:           0x%.16lx\n", (unsigned long)header->entry_point_address);
}
/**
 *main - entry point
 *@argc:toal number of arguements
 *@argv:arguement array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	const char *filename = argv[1];
	int file;
	ElfHeader elf_header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <elf_filename>\n", argv[0]);
		return (98);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		perror("Failed to open file");
		return (98);
	}
	if (read(file, &elf_header, sizeof(ElfHeader)) != sizeof(ElfHeader))
	{
		perror("Failed to read ELF header");
		close(file);
		return (98);
	}
	close(file);
	display_elf_header_info(&elf_header);
	return (0);
}

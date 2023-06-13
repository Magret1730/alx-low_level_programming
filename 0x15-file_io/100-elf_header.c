#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <elf.h>
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

void print_elf_header_info(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("Class:\t%s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:\t%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:\t%d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:\t%s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V" : "Other");
	printf("ABI Version:\t%d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:\t%d (ET_EXEC)\n", header->e_type);
	printf("Entry point address:\t0x%lx\n", header->e_entry);
	printf("Format:\tELF64\n");
}

int main(int argc, char *argv[])
{
	int fd;
	const char *elf_filename;
	Elf64_Ehdr header;
	
	if (argc != 2)
		print_error("Invalid number of arguments");
	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
		print_error("Failed to open the ELF file");
	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Failed to read ELF header");
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Not an ELF file");
	print_elf_header_info(&header);

	close(fd);
	return (0);
}

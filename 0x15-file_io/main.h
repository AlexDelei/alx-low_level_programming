#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024
#define ELF_HEADER_SIZE 64
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <elf.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_exit(int code, const char *format, const char *arg);
int main(int argc, char *argv[]);
void print_elf_header_info(unsigned char *elf_header);
void handleError(const char *message, int exitCode);
void copyFile(const char *file_from, const char *file_to);
#endif

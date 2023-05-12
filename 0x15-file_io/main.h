#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int __attribute__((__unused__)) argc, char *argv[]);
void close_elf(int elf);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
#endif


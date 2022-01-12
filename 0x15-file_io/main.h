#ifndef HEADER_FILE
#define HEADER_FILE main.h

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int _putchar(char c);
int _strlen(char *s);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void exit_procedure(int code, int fd, char **av);

#endif
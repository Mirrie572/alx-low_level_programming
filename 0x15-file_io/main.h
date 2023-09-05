#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

/* list of libralies */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>

/* prototypes to be used */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
int main(int argc, char *argv[]);

#endif

#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <sys/tpes.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif

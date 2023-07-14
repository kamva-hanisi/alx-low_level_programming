#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv);
void check100(int check, int file_open);
void check97(int argc);
void check98(ssize_t check, char *file, int file_open_from, int file_open_to);
void check99(ssize_t check, char *file, int file_open_from, int file_open_to);

#endif

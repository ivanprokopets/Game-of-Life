#ifndef READ_AND_WRITE_PNG_H
#define READ_AND_WRITE_PNG_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <png.h>

int width, height;
int** matrix;
int x, y;
png_byte color_type;
png_byte bit_depth;

png_structp png_ptr;
png_infop info_ptr;
int number_of_passes;
png_bytep* row_pointers;

void read_png_file(char*);
void write_png_file(char*, int);
void process_file(int**);
void process_file_for_txt(int**);

#endif
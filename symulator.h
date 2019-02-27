#ifndef SYMULATOR_H
#define SYMULATOR_H
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_RESET "\x1b[0m"

#include "read_and_write_png.h"
#include "regula_generacji.h"

void symulator_Moore_a(int, int**, char*);
void symulator_Neumann(int, int**, char*);
void symulator_Moore_a_txt(int, int**, char*);
void symulator_Neumann_txt(int, int**, char*);
void usage();

#endif
#ifndef REGULA_GENERACJI_H
#define REGULA_GENERACJI_H

#include "generacja.h"
#include "read_and_write_png.h"
#include "sasiadstwa.h"

int** create_next_gen_Moore_a(int**);
int** create_next_gen_Neumann(int**);
void free_matrix(int**);

#endif
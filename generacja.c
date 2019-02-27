
#include "generacja.h"

void print_gen_to_file(int * * matrix, int nr) {
    color_type = PNG_COLOR_TYPE_GRAY;

    for (y = 0; y < height; y++) {
        png_byte * row = row_pointers[y];
        for (x = 0; x < width; x++) {
            row[x] = matrix[y][x] == 1 ? 0 : 255;
        }
    }

    char nazwapliku[100];
    char * name_of_file;
    sprintf(nazwapliku, "wynik_%d.txt", nr);
    char * folder = "wynik/";
    name_of_file = malloc(strlen(nazwapliku));
    strcpy(name_of_file, nazwapliku);
    strcpy(name_of_file, folder);
    strcat(name_of_file, nazwapliku);

    FILE * p = fopen(name_of_file, "w");
    int i, j;

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            fprintf(p, "%d ", matrix[i][j]);
        }
        fprintf(p, "\n");
    }
    fclose(p);
}
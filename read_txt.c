#include "read_txt.h"
#include "regula_generacji.h"
#include <stdio.h>
#include <stdlib.h>

int** read_txt(char * nazwa_pliku) {
    FILE * p = fopen(nazwa_pliku, "r");
    if (p == NULL) {
        printf("[read_txt] Podany plik \033[01;37m %s \x1b[0m nie istnieje\n", nazwa_pliku);
        return NULL;
    }
    printf(".");
    int i, j;
    if (p != NULL) {
        fscanf(p, "%d %d", & width, & height);
        printf("width: %d height: %d \n", width, height);
        int * * matrix = (int * * ) malloc(height * sizeof(int * ));
        for (i = 0; i < height; i++) {
            matrix[i] = malloc(width * sizeof(int));
        }

        for (i = 0; i < width; i++) {
            for (j = 0; j < height; j++) {
                fscanf(p, "%d", & matrix[i][j]);
            }
        }
    }
    if (strcmp(nazwa_pliku, "dane/dane.txt") == 0) {
        printf("Plik o nazwie \033[01;37m %s \x1b[0m został wczytany\n", nazwa_pliku);
    } else {
        printf("[read_txt] Plik \033[01;37m %s \x1b[0m nie jest rozpoznany jako TXT\n", nazwa_pliku);
        return NULL;
    }
    fclose(p);

    return matrix;
}
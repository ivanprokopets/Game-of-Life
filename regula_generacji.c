
#include "regula_generacji.h"

int** create_next_gen_Moore_a(int * * matrix) {
    int * * matrix_new = malloc(sizeof(int * ) * height);
    int i, j;
    int neighbours_alive;
    for (i = 0; i < height; i++) {
        matrix_new[i] = malloc(sizeof(int) * width);
    }

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            neighbours_alive = count_neighbours_Moore_a(j, i, matrix);
            if (matrix[i][j] == 0 && neighbours_alive == 3) {
                matrix_new[i][j] = 1;
            } else if (matrix[i][j] == 1 && (neighbours_alive == 2 || neighbours_alive == 3)) {
                matrix_new[i][j] = 1;
            } else if (matrix[i][j] == 1 && neighbours_alive != 2 && neighbours_alive != 3) {
                matrix_new[i][j] = 0;
            } else {
                matrix_new[i][j] = matrix[i][j];
            }
        }
    }
    return matrix_new;
}

int** create_next_gen_Neumann(int * * matrix) {
    int * * matrix_new = malloc(sizeof(int * ) * height);
    int i, j;
    int neighbours_alive;
    for (i = 0; i < height; i++) {
        matrix_new[i] = malloc(sizeof(int) * width);
    }

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            neighbours_alive = count_neighbours_Neumann(j, i, matrix);
            if (matrix[i][j] == 0 && neighbours_alive == 3) {
                matrix_new[i][j] = 1;
            } else if (matrix[i][j] == 1 && (neighbours_alive == 2 || neighbours_alive == 3)) {
                matrix_new[i][j] = 1;
            } else if (matrix[i][j] == 1 && neighbours_alive != 2 && neighbours_alive != 3) {
                matrix_new[i][j] = 0;
            } else {
                matrix_new[i][j] = matrix[i][j];
            }
        }
    }
    return matrix_new;
}

void free_matrix(int * * matrix) {
    int i;
    for (i = 0; i < width; i++)
        free(matrix[i]);
    free(matrix);
}

#include "generacja.h"
#include "read_and_write_png.h"
#include "sasiadstwa.h"
#include "regula_generacji.h"
#include "read_txt.h"
#include "symulator.h"

int main(int argc, char * * argv) {
    int i;
    if (argc < 2) {
        usage();
        return -1;
    }
    if (argc < 6) {
        printf(ANSI_COLOR_RED "Nie poprawna ilość argumentów"
            ANSI_COLOR_RESET);
        printf("\n");
        usage();
        return -2;
    }
    if (argc > 6) {
        printf(ANSI_COLOR_RED "Za dużo argumentów"
            ANSI_COLOR_RESET);
        printf("\n");
        usage();
        return -3;
    }
    if (atoi(argv[5]) < 0) {
        printf(ANSI_COLOR_RED "Nie wolno wprowadzic ujemna liczbe generacji"
            ANSI_COLOR_RESET);
        printf("\n");
        usage();
        return -4;
    }
    if (atoi(argv[1]) == 0) {

        if (atoi(argv[2]) == 2) {
            read_png_file(argv[3]);
            int * * matrix = malloc(sizeof(int * ) * height);

            for (i = 0; i < height; i++) {
                matrix[i] = malloc(sizeof(int) * width);
            }

            char * file_o = argv[4];
            int num_of_symulations = atoi(argv[5]);
            symulator_Moore_a(num_of_symulations, matrix, file_o);
            system("convert -delay 15 -loop 0 `ls -v wynik/*.png`  wynik/out.gif");
            printf("Tworzenie folderu\033[01;37m wynik\x1b[0m...\n");
            printf("Plik gif o nazwie\033[01;37m out.gif\x1b[0m zostal stworzony z pomocą metody Moore'a\n");
            printf("Zeby popatrzyc wyniki, prosze wejsc w katalog\033[01;37m wynik\x1b[0m\n");
            free_matrix(matrix);
        } else if (atoi(argv[2]) == 3) {

            read_txt(argv[3]);

            int * * matrix = malloc(sizeof(int * ) * height);

            for (i = 0; i < height; i++) {
                matrix[i] = malloc(sizeof(int) * width);
            }

            char * file_o = argv[4];
            int num_of_symulations = atoi(argv[5]);
            symulator_Moore_a_txt(num_of_symulations, matrix, file_o);
            system("convert -delay 15 -loop 0 `ls -v wynik/*.png`  wynik/out.gif");
            printf("Tworzenie folderu\033[01;37m wynik\x1b[0m...\n");
            printf("Plik gif o nazwie\033[01;37m out.gif\x1b[0m zostal stworzony z pomocą metody Moore'a\n");
            printf("Zeby popatrzyc wyniki, prosze wejsc w katalog\033[01;37m wynik\x1b[0m\n");
            free_matrix(matrix);
        }
    } else if (atoi(argv[1]) == 1) {

        if (atoi(argv[2]) == 2) {
            read_png_file(argv[3]);
            int * * matrix = malloc(sizeof(int * ) * height);

            for (i = 0; i < height; i++) {
                matrix[i] = malloc(sizeof(int) * width);
            }

            char * file_o = argv[4];
            int num_of_symulations = atoi(argv[5]);
            symulator_Neumann(num_of_symulations, matrix, file_o);
            system("convert -delay 15 -loop 0 `ls -v wynik/*.png`  wynik/out.gif");
            printf("Tworzenie folderu\033[01;37m wynik\x1b[0m...\n");
            printf("Plik gif o nazwie\033[01;37m out.gif\x1b[0m zostal stworzony z pomocą metody Neumann\n");
            printf("Zeby popatrzyc wyniki, prosze wejsc w katalog\033[01;37m wynik\x1b[0m\n");
            free_matrix(matrix);
        } else if (atoi(argv[2]) == 3) {

            read_txt(argv[3]);

            int * * matrix = malloc(sizeof(int * ) * height);

            for (i = 0; i < height; i++) {
                matrix[i] = malloc(sizeof(int) * width);
            }

            char * file_o = argv[4];
            int num_of_symulations = atoi(argv[5]);
            symulator_Neumann_txt(num_of_symulations, matrix, file_o);
            system("convert -delay 15 -loop 0 `ls -v wynik/*.png`  wynik/out.gif");
            printf("Tworzenie folderu\033[01;37m wynik\x1b[0m...\n");
            printf("Plik gif o nazwie\033[01;37m out.gif\x1b[0m zostal stworzony z pomocą metody Neumann\n");
            printf("Zeby popatrzyc wyniki, prosze wejsc w katalog\033[01;37m wynik\x1b[0m\n");
            free_matrix(matrix);
        }
    }
    return 0;
}
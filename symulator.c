
#include "symulator.h"

void symulator_Moore_a(int num_of_symulations, int * * matrix, char * output) {

    process_file(matrix);

    int i;
    for (i = 0; i < num_of_symulations; i++) {
        write_png_file(output, i);
        matrix = create_next_gen_Moore_a(matrix);
        print_gen_to_file(matrix, i);
    }
    free_matrix(matrix);
}

void symulator_Neumann(int num_of_symulations, int * * matrix, char * output) {

    process_file(matrix);

    int i;
    for (i = 0; i < num_of_symulations; i++) {
        write_png_file(output, i);
        matrix = create_next_gen_Neumann(matrix);
        print_gen_to_file(matrix, i);
    }
    free_matrix(matrix);
}

void symulator_Moore_a_txt(int num_of_symulations, int * * matrix, char * output) {

    process_file_for_txt(matrix);

    int i;
    for (i = 0; i < num_of_symulations; i++) {
        write_png_file(output, i);
        matrix = create_next_gen_Moore_a(matrix);
        print_gen_to_file(matrix, i);
    }
    free_matrix(matrix);
}

void symulator_Neumann_txt(int num_of_symulations, int * * matrix, char * output) {

    process_file_for_txt(matrix);

    int i;
    for (i = 0; i < num_of_symulations; i++) {
        write_png_file(output, i);
        matrix = create_next_gen_Neumann(matrix);
        print_gen_to_file(matrix, i);
    }
    free_matrix(matrix);
}

void usage() {
    printf("Żeby urochomić program proszę wprowadzić 5 argumentów\n");
    printf("\033[01;37m \n");
    printf(ANSI_COLOR_MAGENTA "Usage: "
        ANSI_COLOR_RESET);
    printf("\033[01;37m");
    printf(ANSI_COLOR_MAGENTA "\n\tPierwszy argument: "
        ANSI_COLOR_RESET);
    printf("\033[01;37m \n0"
        ANSI_COLOR_RESET " – To zaczyna się generacja za pomocą metody "
        ANSI_COLOR_GREEN "Moore'a"
        ANSI_COLOR_RESET);
    printf("\033[01;37m \n1"
        ANSI_COLOR_RESET " – To zaczyna się generacja za pomocą metody "
        ANSI_COLOR_GREEN "Neumanna"
        ANSI_COLOR_RESET);
    printf("\033[01;37m \n");
    printf(ANSI_COLOR_MAGENTA "\n\tDrugi argument: "
        ANSI_COLOR_RESET);
    printf("\033[01;37m \n2"
        ANSI_COLOR_RESET " – Czyta "
        ANSI_COLOR_GREEN ".png"
        ANSI_COLOR_RESET " plik");
    printf("\033[01;37m \n3"
        ANSI_COLOR_RESET " – Czyta "
        ANSI_COLOR_GREEN ".txt"
        ANSI_COLOR_RESET " plik");
    printf("\033[01;37m \n");
    printf(ANSI_COLOR_MAGENTA "\n\tTrzeci argument: "
        ANSI_COLOR_RESET);
    printf("\nWprowadź"
        ANSI_COLOR_GREEN " plik"
        ANSI_COLOR_RESET " wejściowy"
        ANSI_COLOR_GREEN " .txt"
        ANSI_COLOR_RESET " lub"
        ANSI_COLOR_GREEN " .png"
        ANSI_COLOR_RESET);
    printf(" znajdujący w folderze"
        ANSI_COLOR_GREEN " dane"
        ANSI_COLOR_RESET " w zależności od drugiego argumentu");
    printf("\033[01;37m \n");
    printf(ANSI_COLOR_MAGENTA "\n\tCzwarty argument: "
        ANSI_COLOR_RESET);
    printf("\nWprowadź"
        ANSI_COLOR_GREEN " nazwę pliku"
        ANSI_COLOR_RESET " wyjściowego");
    printf("\033[01;37m \n");
    printf(ANSI_COLOR_MAGENTA "\n\tPiąty argument: "
        ANSI_COLOR_RESET);
    printf("\nWprowadź"
        ANSI_COLOR_GREEN " liczbę generacji"
        ANSI_COLOR_RESET);
    printf("\033[01;37m \n");
    printf(ANSI_COLOR_MAGENTA "\n\tPrzykładowe wywołanie programu: "
        ANSI_COLOR_RESET);
    printf("\033[01;37m \n./game 0 2 dane/input.png out 200");
    printf("\n");
    printf(ANSI_COLOR_MAGENTA "\n\tOczyszczenie stworzonych plików,obrazków oraz folderu: "
        ANSI_COLOR_RESET);
    printf("\033[01;37m \nmake clean\x1b[0m");
    printf("\n");
}

#include "read_and_write_png.h"
#include "regula_generacji.h"
#include "read_txt.h"

int main(int argc, char * argv[]) {
    printf("Prosze wybrac test:\n");
    printf("1 - wczytywanie z pliku txt\n");
    printf("2 - wczytywanie z png file\n");
    int test;
    scanf("%d", & test);
    if (test == 1) {
        printf("Prosze podac nazwe pliku txt do wczytania: ");
        char nazwa_pliku[32];
        scanf("%s", nazwa_pliku);
        read_txt(nazwa_pliku);
    } else if (test == 2) {
        printf("Prosze podac nazwe pliku png do wczytania: ");
        char nazwa_pliku[32];
        scanf("%s", nazwa_pliku);
        read_png_file(nazwa_pliku);
    } else {
        printf("Niepoprawny wybor testu\n");
        printf("Prosze wprowadzic 1 albo 2 dla testowania\n");
        return 1;
    }
    return 0;
}
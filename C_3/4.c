#include <stdio.h>
#include <stdlib.h>

void reverse_all (char *napis)
{
    if ( *napis ) {
        reverse_all(napis + 1);
        printf("%c", *napis);
    }
}

int main (int argc, char **argv) {
    char napis[] = "ala ma kota";
    char *orginal = napis;

    printf("%s\n", napis);
    reverse_all(napis);
    printf("\n");
    return 0;
}
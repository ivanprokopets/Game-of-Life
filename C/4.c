#include <stdio.h>


// int liczbcmp( const void *a, const void *b) {
// 	int**aa = (int**)a;
// 	int**bb = (int**)b;
// 	return *aa - *bb;
// }

int main( int argc, char **argv) {
    if (argc != 3) {
    fprintf(stderr," %s: musza być dokladnie 2 argumenty\n", argv[0]);
    return 1;
  }
	FILE *input= argc > 1 ? fopen( argv[1], "r" ) : stdin;
	FILE *out = argc > 2 ? fopen(argv[2], "w") : stdout;

  int i,j;
	int a[10000];
	int size = 10000;


	if( input == NULL ) {
  	fprintf( stderr, "%s: błąd: nie mogę czytać pliku %s\n", argv[0], argv[1] );
  	return 2;
	}
    for(i = 0; i < size; i++) {
        if(fscanf(input, "%d", &a[i]) == EOF) {
            break;
        }
      j++;
    }
fclose(input);

    int c = a[0];
    int k,p;
    for(i = 0; i < j; i++) {
        for(k = 0; k < j - 1; k++) {
                if(a[k] >= a[k+1]) {
                    p = a[k];
                    a[k] = a[k+1];
                    a[k+1] = p;
                }   
        }
    }
    for(i = 0; i < j; i ++){
        fprintf(out, "%d ", a[i]);
    }
fclose(out);

return 0;
}
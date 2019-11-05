#include <stdio.h>
#include <stdlib.h>

int main( int argc, char **argv) {
	FILE *input = argc > 1 ? fopen(argv[1], "r") : stdin;
	
	if( input == NULL ) {
		fprintf( stderr,"%s Nie mogę czytać pliku %s!\n",argv[0],argv[1] );
		return 2;
	}
	int max,a,i;
	fscanf(input, "%d,", &a);
	while( fscanf(input, "%d,", &a) > 0 ) {
    	if (max < a) { 
    		max = a;
    	}
	}
	printf( "Plik '%s' max liczba  %d \n", argv[1], max);
	return 0;
}			

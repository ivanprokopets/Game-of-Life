#include <stdio.h>

int main( int argc, char **argv) {
	int c;
	int przeciecie = 0;
	
	FILE *input = argc > 1 ? fopen(argv[1], "r") : stdin;
	
	if( input == NULL ) {
		fprintf( stderr,"%s Nie mogę czytać pliku %s!\n",argv[0],argv[1] );
		return 2;
	}
	while ( (c = fgetc(input)) != EOF) {
		if ( c == ','){
			++przeciecie;
		}
	}
	printf( "Plik '%s' zawiera  %d przecinkow\n", argv[1], przeciecie);
	return 0;
}
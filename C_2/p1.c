#include <stdio.h>
#include <stdlib.h>

int main( int argc, char * argv[] ) {
	for( int i= 0; i < argc; i++ ) {
		if( atoi(argv[i]) % 2 != 0) {
		printf( "%s\n", argv[i] );
		}	
	}
	return 0;
}

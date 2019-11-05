#include <stdio.h>

void zeruj( int *n ) {
	printf( "zeruj : dostałam %d\n", *n );
	for( ; *n > 0; (*n)-- )
		;
	printf( "zeruj : n=%d\n", *n );
}

int main() {
	
	int x;

	for( x= 10; x < 20; x++ ) {
		zeruj( &x );
		printf( "x= %d\n", x );
	}

	return 0;
}

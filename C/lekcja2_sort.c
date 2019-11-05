#include <stdio.h>

#define MAXL 100000

void sort( double t[], int n );

int main( int argc, char *argv[] ) {
	FILE *in = argc > 1 ? fopen( argv[1], "r" ) : stdin;
	FILE *out = argc > 2 ? fopen( argv[2], "w" ) : stdout;

	if( in == NULL || out == NULL ) {
		fprintf( stderr, "%s: życie chłoszcze!\n", argv[0] );
		return 1;
	}

	int n= 0;
	double t[MAXL];

	while( fscanf( in, "%lf", &t[n] ) == 1 )
		n++;

	fclose( in );

	sort( t, n );

	int i;
	for( i= 0; i < n; i++ )
		fprintf( out, "%g\n", t[i] );

	fclose( out );

	return 0;

}

void sort( double v[], int n ) {
	int i, j;
	double tmp;

	for( i= 1; i < n; i++ ) {
		tmp= v[i];
		for( j= i; j > 0 && v[j-1] > tmp; j-- )
			v[j]= v[j-1];
    v[j] = tmp;
	}
}



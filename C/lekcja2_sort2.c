#include <stdio.h>

#define MAXL 100000

void sort( double [], double [], int );

int main( int argc, char *argv[] ) {
	FILE *in = argc > 1 ? fopen( argv[1], "r" ) : stdin;
	FILE *out = argc > 2 ? fopen( argv[2], "w" ) : stdout;

	if( in == NULL || out == NULL ) {
		fprintf( stderr, "%s: życie chłoszcze!\n", argv[0] );
		return 1;
	}

	int n= 0;
	double x[MAXL];
	double y[MAXL];

	while( fscanf( in, "%lf %lf", &x[n], &y[n] ) == 2 )
		n++;

	fclose( in );

	sort( x, y, n );

	int i;
	for( i= 0; i < n; i++ )
		fprintf( out, "%g %g\n", x[i], y[i] );

	fclose( out );

	return 0;

}

void sort( double v[], double u[], int n ) {
	int i, j;
	double tmp1, tmp2;

	for( i= 1; i < n; i++ ) {
		tmp1= v[i];
		tmp2= u[i];
		for( j= i; j > 0 && v[j-1] > tmp1; j-- ) {
			v[j]= v[j-1];
			u[j]= u[j-1];
		}
    v[j] = tmp1;
		u[j] = tmp2;
	}
}

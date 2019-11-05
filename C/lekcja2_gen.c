#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main( int argc, char *argv[] )
{
    FILE *out = argc > 1 ? fopen (argv[1], "w") : stdout;  
    int n = argc > 2 ? atoi( argv[2] ) : 10; 

    int i; 
	if( out == NULL ) 
	{ 
	fprintf( stderr, "%s: nie moge utworzyc pliku \"%s\"\n", argv[0], argv[1] );
	return 1;  
	}

	srand( time(NULL) ); 

	for( i = 0; i < n; i++ ) 
	{
	  double x1 = 10. * rand() / RAND_MAX; 
	  double x2 = 2. * rand() / RAND_MAX - 1.; 

	fprintf( out, "%g %g\n", x1, x2); 
	}
}

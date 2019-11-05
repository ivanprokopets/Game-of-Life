#include <stdlib.h> 
#include <stdio.h> 

double sum( double v[], int l ) 
{
   double s = 0.0;
   int i;
   for( i = 0; i < l; i++ )
	s += v[i];
   return s;
}

int main( int argc, char *argv[] ) {
   double t[1000];
   int i;
   int n = 0; 
   for( i = 1; i < argc; i++ ) 
      t[n++] = atof (argv[i]); 

printf( "=%g\n", sum( t, n ) ); 
return 0;
} 

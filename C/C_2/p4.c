#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DEFAULT 5
#define MIN -10.0
#define MAX 10.0
 
int main( int argc, char **argv) {
      int n = argc > 1 ? atoi(argv[1]) : DEFAULT;

	srand(time(NULL));

	while( n-- )
		printf( "%g\n", MIN+(MAX-MIN)*rand()/RAND_MAX );

	return 0;
}

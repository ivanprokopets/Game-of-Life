#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
	int i;
	int ile = 5;
	double tmp;
	srand ( time(NULL) );

	if (argc < 2 ){
		for ( i = 0; i < ile; i++ ) {
		tmp = (((double)rand() / RAND_MAX) *20) -10;
		printf ("%lf ", tmp);
		}
		printf("\n");
		//return ile;
	} else {
		int a = atoi(argv[1]);
		for ( i = 0 ; i < a; i++ ) {
			tmp = (((double)rand() / RAND_MAX) *20) -10;
			printf ("%lf ", tmp);
		}
		printf("\n");
		//return a;
	}
	return 0;
}









// dowolny zakres
// 	int random(int min, int max)
// {
//     int tmp;
//     if (max>=min)
//         max-= min;
//     else
//     {
//         tmp= min - max;
//         min= max;
//         max= tmp;
//     }
//     return max ? (rand() % max + min) : min;
// }
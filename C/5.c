#include <stdio.h>
#include <stdlib.h>

int uu( double v[], int n ) {

  int j= 0;
	for( int i= 0; i < n; i++ ) {
		if( v[i] >= 0 ) {
			v[j++]= v[i];
		}
	}
	return j;
}

// void usun_ujemne(double *v, int *n)
// {                                  
//         /* Usuwa ujemne elementy z wektora v */
//         double         *u = v;
//         int             l = *n;
//         while (l--) {
//                 if (*v >= 0)    /* jeśli element jest dodatni */
//                         *u++ = *v;      /* to zapamiętaj go w "nowym"
//                                          * wektorze */
//                 else
//                         (*n)--; /* w przeciwnym razie zmniejsz 
//                                  * wartosc wskazywana przez n */
//                 v++;
//         }
// }

int main( int argc, char **argv ) {
	double t[100];
	for( int i= 1; i < argc; i++ ) {
		t[i-1]= atof( argv[i] );
	}

	int n = uu( t, argc-1 );
	

	for( int i= 0; i < n; i++ ) {
		printf( "%g\n", t[i] );
	}
	printf(" (%d elementow)\n", n);

	return 0;
}

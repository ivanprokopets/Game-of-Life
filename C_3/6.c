#include <stdio.h>
#include <stdlib.h>

typedef struct {
	double *elementy;
	int wielkosc;
	int akt_liczba_elementow;
} wektor_t;

int dod ( wektor_t *w, double a ) { 

	if ( w->wielkosc == w->akt_liczba_elementow) {
		w->wielkosc *= 2;
		w->elementy = (double*)realloc(w->elementy, sizeof(double)*w->wielkosc); 

		if (w->elementy == NULL) {
			return 0; 
		}
	}

	*( w->elementy + (w->akt_liczba_elementow) ) = a; 
	 ( w->akt_liczba_elementow )++; 
	return 1; 
} 

void wyp ( wektor_t *w ){ 
	for ( int x = 0; x < w->akt_liczba_elementow; x++ ) { 
		printf("%lf\t", *( w->elementy + x ) ); 
	} 
	printf("\n"); 
} 

void main() { 

	wektor_t *nowy = malloc(sizeof(wektor_t) ); 
 	nowy->wielkosc = 1; 	
	//	nowy->akt_liczba_elementow = 1; 
	nowy->elementy = malloc( nowy->wielkosc *sizeof(double) ); 
	//*( nowy->elementy ) = 1.0; 

	wyp(nowy); 
	dod(nowy,3.0); 
	wyp(nowy); 
	dod(nowy,4.9); 
	wyp(nowy); 
	dod(nowy,5.9); 
	wyp(nowy); 

	return ; 
}
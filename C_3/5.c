#include <stdio.h>
#include <stdlib.h>

int min_element( double v[], int n){
	double min = v[0];
	int indeks = 0;

	for (int i = 1; i < n-1; ++i ){
		if (v[i] < min ) {
			min = v[i];
						indeks = i;
		}
	}
	return indeks;
}

int main ( int argc, char **argv){
	int i;
	double a[1000];
	int n = 0;
  	n = argc;
	for (i = 1; i < argc; i++){
		a[i-1] = atof(argv[i]);
	}

    int min;
    min = min_element(a,n);
    printf("%d\n",min );

}

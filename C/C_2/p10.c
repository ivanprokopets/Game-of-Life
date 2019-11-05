#include <stdlib.h>
#include <stdio.h>

int liczba_nie_mniejszych (double v[], int n, double p) {
	int k = 0; 
	for ( int i = 0; i < n; i++)
		if (v[i] > p) 
			k++;
	return k;	
}

int main (int argc, char **argv) {
	double v[] = {1, 3, 4,  23 , 24, };
	int n = sizeof(v)/sizeof(*v);
	double p =23;
	int k = liczba_nie_mniejszych(v, n, p);
	printf("k =%d\n", k);
	return 0;
}
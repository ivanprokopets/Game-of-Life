#include <stdio.h>
#include <stdlib.h>

typedef struct {
	double *values;
	int n;
	int size;
} dvec_t;

int compair (const void *a, const void *b) {
	dvec_t *l1 = (dvec_t*)a;
	dvec_t *l2 = (dvec_t*)b;
	// if (a->size > b-> size) {
	// 	return 1;
	// } else if ( a-> size == b -> size) {
	// 	return 0;
	// }
	return l2->n - l1->n;
}

int main (int argc, char **argv) {
	int n = 0;
	dvec_t size;
	dvec_t values[10000];

	qsort(values,n,sizeof(double),compair);
	n = atoi(argv[1]);
	for ( int i = 0; i < n; i ++) {
		printf("%f", values[i]);
	}
	return 0;
}

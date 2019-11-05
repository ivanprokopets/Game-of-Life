#include <stdio.h>
#include <stdlib.h>

double vec_diff ( double v[], double u[], int n ) {
		int i;
		for ( i = 0; i < n; ++i ){
				v[i] = v[i] - u[i];
				printf("%f\n",v[i]);
		}
		return v[i];
}

int main (int argc, char ** argv) {
	double vv[] = {3,10};
	double uu[] = {1,100};
	double result;
	int nn = sizeof(vv)/sizeof(vv[0]);
	printf("%d \n" , nn);
	//printf("v0 - u0 = %.2f v1 - u1 =  %.2f  \n ", vv[0]- uu[0], vv[1]-uu[1]);
	result=vec_diff(vv,uu,nn);
	printf("Roznica wektorów: %f\n",vec_diff(vv,uu,nn));
		return 0;
}

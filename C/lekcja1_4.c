#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 

int main (int argc, char *argv[]) {
    if(argc > 1 && argc < 4) {
	double re = atof(argv[1]);
	double im = argc < 3 ? 0.0: atof(argv[2]); 
	double ma = sqrt(re*re + im*im);
	double ph = atan2( im, re)*180./M_PI;

	printf("%g+j*%g = %g<%g\n", re, im, ma, ph);
	return 0;
	} else {
		printf("Uzycie:\n\t%s <cz-rzeczywista> <cz-urojona>\n", argv[0]);
		return 1; 
		}
}


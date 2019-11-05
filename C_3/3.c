#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (int argc, char **argv){
	int ilosc = 0;
	double iloczyn = 1;
	double  a;
	if ( argc == 1) {
	 	puts("Musi byc co najmniej 2 cyfry");
	 	return 1;
	}
	for (int i = 1; i < argc; i++){
	if ( strcmp (argv[i],"0") == 1) {
	 	iloczyn = 0;
	 	ilosc = 2;
	 	break;
	}
	a = atof (argv[i]);
		if(a != 0){
			iloczyn *= a;
			ilosc++;
		}
	}
	if (ilosc < 2){
		printf("liczb muszi mniej wiecej 2\n");
		return 2;
	}
	printf("iloczyn %.1lf\n",iloczyn);
	return 0;
}

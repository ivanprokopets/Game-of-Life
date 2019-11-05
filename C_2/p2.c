#include <stdio.h>

int main( int argc, char **argv)
{
   char str[1000], ch;
   int i, n = 0;
	while (str[i] != '\0') {
		if(ch == str[i]) {
			++n;
		}
	i++;
	}

   printf( "\"%c\" wystapil %d razy\n", ch, n );

   return 0;
}

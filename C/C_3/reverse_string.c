# <stdio.h>int len( char *s ) {int i= 0;while( s[i] != '\0' ) {i++;}return i;} char *reverse( char * s ) {int i;for( i= 0; i < len(s) / 2; i++ ) {char tmp = s[i];s[i] = s[ len(s)-i-1 ];s[ len(s)-i-1 ] = tmp;}return s;}int main( int argc, char *argv[] ) {int i;for( i= 1; i < argc; i++ )printf( "%s\n", reverse( argv[i] ) );return 0;}
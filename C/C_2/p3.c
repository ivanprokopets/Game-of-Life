#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
  char tmp = *a;
  *a = *b;
  *b = tmp;
  
}

char * reverse ( char *string) {
  char *wzor = string;
  char *od_tylu = wzor + strlen(wzor)-1;

  while ( wzor < od_tylu ) {
    swap ( wzor++, od_tylu-- );
  }
  return string;
} 

char * reverse1(char *s) {
	int i = 0;
	char t;
	int j =strlen(s);
	while (i < j) {
		t = s[i];
		s[i] = s[j-1];
		s[j-1]=t;
		i++;
		j--;
	}
	return s;
}
strlen (char *str) {
	int counter = 0;
	while (str[counter] != '\0'){
		counter++;
	}
	return counter;
}


int main() {
  char napis[] = "chuj w dupe"; 
 
  printf("%s\n", napis);
  printf("%s\n", reverse1(napis));
}

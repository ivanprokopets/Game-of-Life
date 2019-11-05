#include <stdlib.h>
#include <stdio.h>

typedef struct e {
	int klucz;
	struct e *nast;
} * list_t;

list_t dodaj (list_t list, int nowy_klucz) {
	list_t n =malloc( sizeof n);
	list_t head = list;
	n->klucz = nowy_klucz;
	n->nast  = NULL;

	if( head == NULL){ 
		head=n; 
	return head; 
	} 
	
	while (list->nast != NULL) {
		list = list->nast; 
	}
	list->nast = n; 
	return head; 
} 
void print_list( list_t list ) { 
	while (list != NULL) { 
		printf ("%d", list->klucz); 
		printf("\n"); 
	list = list->nast; 
	}
} 

void main(){ 
	list_t l = NULL; 
	l = dodaj (l,8); 
	l = dodaj (l,7); 
	print_list(l); 
}
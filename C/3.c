#include <stdlib.h>

typedef struct e {
	double x;
	struct e *nast;
} * list_t;

list_t dodaj (list_t list, double nowy) {
	list_t n =malloc( sizeof n);
	list_t head = list;
	n->x = nowy;
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
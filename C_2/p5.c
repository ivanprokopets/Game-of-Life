typedef struct 
{ char *imie, *nazwisko;
	double srednia;
}stud_t;

int pkt_cmp( const void *a, const void *b ) {  
	stud_t * sa = (stud_t*)a;
	stud_t * sb = (stud_t*)b;	
	return (sb->srednia - sa->srednia)/2;
}
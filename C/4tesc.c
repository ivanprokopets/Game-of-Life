#include <stdio.h> 
#include <stdlib.h> 
int compar(const void *a,const void *b){ 
int x=*(int*)a; 
int y=*(int*)b; 
return y-x; 
} 
int main(int argc,char **argv){ 
FILE *in=fopen(argv[1],"r"); 
FILE *out=fopen(argv[2],"w"); 
int *lul=malloc(sizeof(int)*10000); 
int k; 
for(k=0;k<10000;k++){ 
if (fscanf(in,"%d",&lul[k])!=1) 
break; 
} 
qsort(lul,k,sizeof(int),compar); 
for(int i=0;i<k;i++){ 
fprintf(out,"%d\n",*(lul+i)); 
} 
fclose (in); 
fclose (out); 
free (lul); 
return 0; 
}
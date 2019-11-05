#include <stdio.h>
int removenegative(int a[],int *p, int *q);
int main()
{
    int a[] = {1,2, 3, -5, -7, 6, 9};
    int i;
    int *p, *q;
    p = a;
    q = a+6-1;
    int n = removenegative(a, p,q);
    for(i=0;i<n;i++)
        {
        	p++;
            printf("%2d\n", a[i]);
            p++;
        }
    printf("(%d elementow)\n",n);
    return 0;
}
int removenegative(int a[],int *p, int *q)
{
    int *x;
    x= &a[0];
    while (p<=q)
        {
            if (*p>=0)
                {
                    *x = *p;
                    x++;
                }
            p++;
        }
    for( ; x<=q; x++)
        {
            *x = -1;
        }
        return *a;
}

	// int n = uu( t, argc-1 );
	

	// for( int i= 0; i < n; i++ ) {
	// 	printf( "%g\n", t[i] );
	// }
	// printf(" (%d elementow)\n", n);
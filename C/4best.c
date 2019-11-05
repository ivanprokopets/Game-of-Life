#include <stdio.h>
#include <stdlib.h>
#define SIZE 10000

void fun(char * argv[])
{
    int tab[SIZE] = {0};
    int i;
    int j = 0;

    FILE * fp = fopen(argv[1], "r");

    if(!fp)
    {
        printf("File error");
    }


    for(i = 0; i < SIZE; i++)
    {
        if(fscanf(fp, "%d", &tab[i]) == EOF)
        {
            break;
        }
        j ++;
    }

    fclose(fp);

    int c = tab[0];

    int k;
    int p;

    for(i = 0; i < j; i++)
    {
        for(k = 0; k < j - 1; k++)
        {
            {
                if(tab[k] >= tab[k+1])
                {
                    p = tab[k];
                    tab[k] = tab[k+1];
                    tab[k+1] = p;
                }
            }
        }
    }

    FILE * fk = fopen(argv[2], "w");

    if(!fk)
    {
        printf("File error");
    }

    for(i = 0; i < j; i ++)
    {
        fprintf(fk, "%d ", tab[i]);
    }
    fclose(fk);
}

int main(int argc, char * argv[])
{
    fun(argv);
    return 0;
}

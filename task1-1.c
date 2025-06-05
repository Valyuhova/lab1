#include <stdio.h>
#define n 10

int main()
{ 
    int mas [n], i, k, s; 
    float sa;
    printf ("Enter array elements \n");

    for ( i = 0; i < n; i += 1)
    {
        scanf ("%i", &mas[i]); 
    }

    k=0; 
    s=0; 

    for ( i = 0; i < n; i += 1)
    {
        if ( mas[i]<0 )
        { 
            s += mas[i];
            k++;
        }
    }

    if( k)
    { 
        sa= (float)s/k;
        printf ("Arithmetic mean of negative array elements %f \n", sa);
    }

    else
    {
        printf ("The number of elements < 0= %i \n", k);
    }

    return 0;
}
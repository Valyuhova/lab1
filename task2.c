#include <stdio.h>
#define N 10

int main() 
{
    int mas[N], i, product_even_index = 1, sum_between_zeros = 0, first_zero = -1, last_zero = -1;
    printf("Enter %d integers:\n", N);

    for (i = 0; i < N; i += 1) 
    {
        scanf("%d", &mas[i]);
    }

    for (i = 0; i < N; i += 2) 
    {
        product_even_index *= mas[i];
    }

    for (i = 0; i < N; i += 1) 
    {
        if (mas[i] == 0) 
        {
            if (first_zero == -1) 
            {
                first_zero = i;
            }
            last_zero = i;
        }
    }

    if (first_zero != -1 && last_zero != -1 && first_zero < last_zero) 
    {
        for (i = first_zero + 1; i < last_zero; i += 1) 
        {
            sum_between_zeros += mas[i];
        }
    }

    printf("Product of elements with even indices: %d\n", product_even_index);

    if (first_zero != -1 && last_zero != -1 && first_zero < last_zero) 
    {
        printf("The sum between the first and last zero elements: %d\n", sum_between_zeros);
    } 
    
    else 
    {
        printf("There are not enough zero elements in the array to calculate the sum between them.\n");
    }

    return 0;
}
#include <stdio.h>
#include <math.h>
#define n 10

int main() 
{
    int mas[n], i, sum_even = 0, count_even = 0, product_odd = 1, count_odd = 0, max_value, max_index;
    float avg_even, geom_mean_odd;
    printf("Enter %d integers:\n", n);

    for (i = 0; i < n; i += 1) 
    {
        scanf("%d", &mas[i]);
    }

    max_value = mas[0];
    max_index = 0;

    for (i = 0; i < n; i += 1) 
    {
        
        if (mas[i] % 2 == 0) 
        {
            sum_even += mas[i];
            count_even += 1;
        }
       
        else 
        {
            product_odd *= mas[i];
            count_odd += 1;
        }

        
        if (mas[i] > max_value) 
        {
            max_value = mas[i];
            max_index = i;
        }
    }

    if (count_even > 0) 
    {
        avg_even = (float)sum_even / count_even;
        printf("The sum of even numbers: %d\n", sum_even);
        printf("Arithmetic mean of even numbers: %.2f\n", avg_even);
    } 
    
    else 
    {
        printf("There are no even numbers.\n");
    }

    if (count_odd > 0) 
    {
        geom_mean_odd = pow((double)product_odd, 1.0 / count_odd);
        printf("Product of odd numbers: %d\n", product_odd);
        printf("Geometric mean of odd numbers: %.2f\n", geom_mean_odd);
    } 
    
    else 
    {
        printf("There are no odd numbers.\n");
    }

    printf("Maximum value: %d, number: %d\n", max_value, max_index);

    return 0;
}
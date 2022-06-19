#include <stdio.h>
int main()
{
    int num = 1, count, limit;
    float sum = 0.0, fact;

    printf("Enter the number of terms: ");
    scanf("%d", &limit);

    while (num <= limit)
    {
        fact = 1;
        for (count = 1; count <= num; count++)
        {
            fact = fact * count;
        }

        sum = sum + (num / fact);

        num++;
    }

    printf("Sum of %d terms of series is %f\n", limit, sum);

    return 0;
}

// output :
// Enter the number of terms : 7
// Sum of 7 terms of series is 2.718056
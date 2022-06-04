#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Input Value of terms : ");
    scanf("%d", &n);

    printf("The first %d natural numbers are:\n", n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe Sum of natural numbers upto %d terms is : %d \n", n, sum);

    return 0;
}

// output:
// Input Value of terms : 5
// The first 5 natural numbers are:
// 1 2 3 4 5
// The Sum of natural numbers upto 5 terms is : 15
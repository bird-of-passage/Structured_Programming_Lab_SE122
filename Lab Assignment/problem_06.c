// Write a program in C to display the n terms of even natural number and their sum.

#include <stdio.h>
int main()
{

    int n, sum = 0;
    printf("Input Value of terms : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    printf("sum of the even numbers: %d\n", sum);

    return 0;
}

// output:
// Input Value of terms : 6
// sum of the even numbers: 12
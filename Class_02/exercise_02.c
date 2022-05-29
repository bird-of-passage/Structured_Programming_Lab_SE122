#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Its an even number\n");
    }
    else
    {
        printf("Its a odd number\n");
    }

    return 0;
}

// output:
// Enter an integer number: 5
// Its a odd number

// Enter an integer number: 8
// Its an even number
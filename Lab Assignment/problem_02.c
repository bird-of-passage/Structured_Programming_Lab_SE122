#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    float avg;
    printf("Input the 10 numbers : \n");
    for (i = 1; i <= 10; i++)
    {
        printf("Number-%d :", i);

        scanf("%d", &n);
        sum += n;
    }
    avg = sum / 10.0;
    printf("The sum of 10 no is : %d\nThe Average is : %.2f\n", sum, avg);
}

// output:
// Input the 10 numbers :
// Number-1 :10
// Number-2 :11
// Number-3 :12
// Number-4 :13
// Number-5 :14
// Number-6 :15
// Number-7 :16
// Number-8 :17
// Number-9 :18
// Number-10 :19
// The sum of 10 no is : 145
// The Average is : 14.50
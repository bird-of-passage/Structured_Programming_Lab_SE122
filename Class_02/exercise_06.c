#include <stdio.h>
int main()
{
    int first_angel, second_angel, third_angel, sum;

    printf("Enter first side of traingle: ");
    scanf("%d", &first_angel);

    printf("Enter second side of traingle: ");
    scanf("%d", &second_angel);

    printf("Enter third side of traingle: ");
    scanf("%d", &third_angel);

    sum = first_angel + second_angel + third_angel;

    if (sum == 180)
    {

        printf("Triangle is valid\n");
    }
    else
    {

        printf("Triangle is invalid\n");
    }

    return 0;
}

// output:
// Enter first side of traingle: 60
// Enter second side of traingle: 60
// Enter third side of traingle: 60
// Triangle is valid

// Enter first side of traingle: 30
// Enter second side of traingle: 40
// Enter third side of traingle: 50
// Triangle is invalid
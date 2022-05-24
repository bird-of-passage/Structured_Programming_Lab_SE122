#include <stdio.h>
int main()
{
    int i;

    for (i = 0; i < 100; i++)
    {

        if (i == 5)
        {

            continue;
        }

        printf("Angel\n");
    }

    printf("End of for loop");

    return 0;
}
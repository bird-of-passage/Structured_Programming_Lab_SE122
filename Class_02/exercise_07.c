#include <stdio.h>
int main()
{

    int x1, y1, x2, y2, x3, y3, curve1, curve2;

    printf("Please enter the values of Three points: \n");
    printf("(x1,y1): ");
    scanf("%d %d", &x1, &y1);
    printf("(x2,y2): ");
    scanf("%d %d", &x2, &y2);
    printf("(x3,y3): ");
    scanf("%d %d", &x3, &y3);

    curve1 = (x2 - x1) / (y2 - y1);
    curve2 = (x3 - x2) / (y3 - y2);

    if (curve1 == curve2)
    {

        printf("All three points fall on one straight line.\n");
    }
    else
    {

        printf("These three points do not fall on one straight line.\n");
    }

    return 0;
}

// output:
//  Please enter the values of Three points:
//  (x1,y1): 3 4
//  (x2,y2): 5 6
//  (x3,y3): 7 8
//  All three points fall on one straight line.

// Please enter the values of Three points:
// (x1,y1): 6 3
// (x2,y2): 8 2
// (x3,y3): 9 0
// These three points do not fall on one straight line.

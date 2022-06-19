#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, s, area, perimeter;
    printf("Enter the 3 sides of the triangle(a,b,c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    perimeter = a + b + c;

    printf("Area: %.2lf square meter\n", area);
    printf("Perimeter: %.2lf meter\n", perimeter);

    if (area > perimeter)
    {
        printf("The area of triangle is greater than the perimeter of the triangle.\n");
    }
    else
    {
        printf("The perimeter of the triangle is greater than the area of the triangle.\n");
    }

    return 0;
}

// output:
//  Enter the 3 sides of the triangle(a,b,c): 7 5 3
//  Area: 6.50 square meter
//  Perimeter: 15.00 meter
//  The perimeter of the triangle is greater than the area of the triangle.

// Enter the 3 sides of the triangle(a,b,c): 20 32 18
// Area: 163.63 square meter
// Perimeter: 70.00 meter
// The area of triangle is greater than the perimeter of the triangle.
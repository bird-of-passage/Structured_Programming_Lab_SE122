#include <stdio.h>
int main()
{

    char a;

    printf("Enter any single letter,digit or special symbol: ");
    scanf("%c", &a);
    if (a >= 65 && a <= 90)
    {
        printf("You entered a capital letter.\n");
    }
    else if (a >= 97 && a <= 122)
    {
        printf("You entered a small letter.\n");
    }
    else if ((a >= 0 && a <= 47) || (a >= 58 && a <= 64) || (a >= 91 && a <= 96) || (a >= 123 && a <= 127))
    {
        printf("You entered a special symbol.\n");
    }

    return 0;
}

// output:
// Enter any single letter,digit or special symbol: A
// You entered a capital letter.

// Enter any single letter,digit or special symbol: ?
// You entered a special symbol.

// Enter any single letter,digit or special symbol: b
// You entered a small letter.
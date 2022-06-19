#include <stdio.h>
int main()
{
    int i, hour, extra;
    for (i = 1; i <= 10; i++)
    {

        printf("\n");
        printf("Enter the working hour of the employ : ");
        scanf("%d", &hour);

        if (hour > 40)
        {
            extra = (hour - 40) * 12;
            printf("\n%d Rs. is the overtime pay of employee\n", extra);
        }
        else
            printf("\nThis employ has not done overtime.\n");
    }
    return 0;
}

// output:
// Enter the working hour of the employ : 45

// 60 Rs. is the overtime pay of employee

// Enter the working hour of the employ : 35

// This employ has not done overtime.

// Enter the working hour of the employ : 23

// This employ has not done overtime.

// Enter the working hour of the employ : 100

// 720 Rs. is the overtime pay of employee

// Enter the working hour of the employ : 60

// 240 Rs. is the overtime pay of employee

// Enter the working hour of the employ : 25

// This employ has not done overtime.

// Enter the working hour of the employ : 36

// This employ has not done overtime.

// Enter the working hour of the employ : 76

// 432 Rs. is the overtime pay of employee

// Enter the working hour of the employ : 89

// 588 Rs. is the overtime pay of employee

// Enter the working hour of the employ : 67

// 324 Rs. is the overtime pay of employee
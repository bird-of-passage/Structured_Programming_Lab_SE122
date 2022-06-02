#include <stdio.h>

int main()
{
    double attendence, assignments, quiz, presentation, mid, final, result;

    printf("Enter marks of attendence(0-7): ");
    scanf("%lf", &attendence);
    printf("Enter marks of assignments(0-5): ");
    scanf("%lf", &assignments);
    printf("Enter everage marks of quiz(0-15): ");
    scanf("%lf", &quiz);
    printf("Enter marks of presentation(0-8): ");
    scanf("%lf", &presentation);
    printf("Enter marks of Mid-term exam(0-25): ");
    scanf("%lf", &mid);
    printf("Enter marks of Final exam(0-40): ");
    scanf("%lf", &final);

    result = attendence + assignments + quiz + presentation + mid + final;

    // printf("%.2lf", result);

    if (result >= 80 && result <= 100)
    {
        printf("proint: 4.00\tGrade: A+\n");
    }
    else if (result >= 75 && result <= 79)
    {
        printf("proint: 3.75\tGrade: A\n");
    }
    else if (result >= 70 && result <= 74)
    {
        printf("proint: 3.50\tGrade: A-\n");
    }
    else if (result >= 65 && result <= 69)
    {
        printf("proint: 3.25\tGrade: B+\n");
    }
    else if (result >= 60 && result <= 64)
    {
        printf("proint: 3.00\tGrade: B\n");
    }
    else if (result >= 55 && result <= 59)
    {
        printf("proint: 2.75\tGrade: B-\n");
    }
    else if (result >= 50 && result <= 54)
    {
        printf("proint: 2.50\tGrade: C+\n");
    }
    else if (result >= 45 && result <= 49)
    {
        printf("proint: 2.25\tGrade: C\n");
    }
    else
    {
        printf("fail\n");
    }

    return 0;
}

// output:
// Enter marks of attendence(0-7): 7
// Enter marks of assignments(0-5): 4
// Enter everage marks of quiz(0-15): 13
// Enter marks of presentation(0-8): 7
// Enter marks of Mid-term exam(0-25): 22
// Enter marks of Final exam(0-40): 35
// proint: 4.00    Grade: A+
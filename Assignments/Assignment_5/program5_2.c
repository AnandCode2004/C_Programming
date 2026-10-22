#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    
    if (iYear <= 0)
    {
        printf("Invalid input. Year must be greater than 0.\n");
        return;
    }

    // A year is a leap year if it is:
    // 1. Divisible by 400 OR
    // 2. Divisible by 4 but NOT divisible by 100
    if ((iYear % 400 == 0) || (iYear % 4 == 0 && iYear % 100 != 0))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}

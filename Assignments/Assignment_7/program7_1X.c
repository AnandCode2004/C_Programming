/// input : 5
// output : $ * $ * $ * $ * $ *

#include <stdio.h>
#include <stdlib.h>

void Pattern(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t");
        printf("*\t");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number:\n");
    if (scanf("%d", &iValue) != 1)
    {
        printf("invalid input\n");
        return EXIT_FAILURE;
    }

    Pattern(iValue);

    return EXIT_SUCCESS;
}
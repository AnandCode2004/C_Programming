
#include <stdio.h>
#include <stdlib.h>

void findGreatest(int iFirst, int iSecond, int iThird)
{
    if ((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf("%d is the greatest\n", iFirst);
    }
    else if ((iSecond >= iFirst) && (iSecond >= iThird))
    {
        printf("%d is the greatest\n", iSecond);
    }
    else
    {
        printf("%d is the greatest\n", iThird);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    findGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}

/// input : 3 
// output : -3 -2 -1 0 1 2 3 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//   Function Name           :DisplayNumberLine    
//   Input                   :Integer
//   Output                  :Integer
//   Description             :accept number from user and display Numberline of that number
//   Date                    :30/10/2026
//   Author                  :Anand Rashtrapal Ingle
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplayNumberLine(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t" , iCnt);
    }
    printf("\n");  /* create one line space below output*/
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

    DisplayNumberLine(iValue);

    return EXIT_SUCCESS;
}
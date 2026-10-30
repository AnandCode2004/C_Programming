/// input : 5
// output : $ * $ * $ * $ * $ *


////////////////////////////////////////////////////////////
//  
//   Function Name           :DisplayPattern    
//   Input                   :Integer
//   Output                  :Symbols($ *)
//   Description             :display Patterns
//   Date                    :30/10/2026
//   Author                  :Anand Rashtrapal Ingle
//
//////////////////////////////////////////////////////// 


#include <stdio.h>
#include <stdlib.h>

void DisplayPattern(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
      
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

    DisplayPattern(iValue);

    return EXIT_SUCCESS;
}
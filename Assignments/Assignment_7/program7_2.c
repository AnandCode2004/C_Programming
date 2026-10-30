/// input : 8 
// output : 1 2 3 4 5 6 7 8

////////////////////////////////////////////////////////////
//  
//   Function Name           :Display    
//   Input                   :Integer
//   Output                  :Integer
//   Description             :display Numbers
//   Date                    :30/10/2026
//   Author                  :Anand Rashtrapal Ingle
//
//////////////////////////////////////////////////////// 



#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t" , iCnt);
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

    Display(iValue);

    return EXIT_SUCCESS;
}
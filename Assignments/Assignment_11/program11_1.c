/*
    Write a program which accept range from user an display all numbers in between that range.
*/

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///   Function Name           :rangeDisplay    
///   Input                   :Integer,Integer
///   Output                  :None(Display range)
///   Description             :display all numbers in between range
///   Date                    :05/10/2026
///   Author                  :Anand Rashtrapal Ingle
///
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void rangeDisplay(int iNo1,int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("invalid range\n");
        return;
    }

    int iCnt = 0;

    for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter first number:\n");
    if(scanf("%d" , &iValue1) != 1)
    {
        printf("Invalid number.\n");
        return EXIT_FAILURE;
    }

    printf("Enter second number:\n");
    if(scanf("%d" , &iValue2) != 1)
    {
        printf("Invalid number.\n");
        return EXIT_FAILURE;
    }

    rangeDisplay(iValue1,iValue2);
    
    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///        
///        Tested test cases
///----------------------------------------------------------
///         Input1        Input2       ouput
///---------------------------------------------------------
///         23            35           23  24  25  26  27  28  29  30  31  32  33  34  35
///
///         10            18           10  11  12  13  14  15  16  17  18
///         
///         10            10           10 
///         
///        -10            2           -10  -9  -8  -7  -6  -5  -4  -3  -2  -1  0  1  2   
///
///         90            18           Invalid range
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
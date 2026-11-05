/*
    Write a program which accept range from user and display all Even numbers in between that range.
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

void rangeDisplayEven(int iNo1  , int iNo2)
{
    
    if (iNo1 > iNo2)
    {
        printf("invalid range\n");
        return;
    }

   
    int iCnt = 0;
    for(iCnt = iNo1 ;iCnt <= iNo2; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t" , iCnt);
        }
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter first number : \n");
    if(scanf("%d" , &iValue1) != 1) 
    {
        printf("invalid input\n");
        return EXIT_FAILURE;
    }
    
    printf("Enter second number : \n");
    if(scanf("%d" , &iValue2) != 1) 
    {
        printf("invalid input\n");
        return EXIT_FAILURE;
    }

    rangeDisplayEven(iValue1,iValue2);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///        
///        Tested test cases
///----------------------------------------------------------
///         Input1        Input2       ouput
///---------------------------------------------------------
///         23            35           24   26   28  30   32   34  
///
///         10            18           10   12    14    16    18
///         
///         10            10           10 
///         
///        -10            2           -10    -8   -6   -4   -2   0   2   
///
///         90            18           Invalid range
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
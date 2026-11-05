/*
    write a program which accept range from user and return addition of all even numbers in between that range.(range should contains positive numbers only)
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///   Function Name           :rangeDisplayRev    
///   Input                   :Integer,Integer
///   Output                  :Integer
///   Description             :perfrom addition of numbers between the range
///   Date                    :05/10/2026
///   Author                  :Anand Rashtrapal Ingle
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void rangeDisplayRev(int iNo1,int iNo2)
{   
    if(iNo1 > iNo2)
    {
        printf("invalid range\n");
        return;
    }

    int rSum = 0;
    int iCnt = 0;

    for(iCnt = iNo2; iCnt >= iNo1; iCnt--)
    {   
        printf("%d\t",iCnt);
    }


}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
   

    printf("Enter first number : \n");
    if (scanf("%d" , &iValue1) != 1)
    {
        printf("invalid input\n");
        return EXIT_FAILURE;
    }

    printf("Enter second number : \n");
    if (scanf("%d" , &iValue2) != 1)
    {
        printf("invalid input\n");
        return EXIT_FAILURE;
    }

   

    rangeDisplayRev(iValue1,iValue2);

   
    

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///        
///        Tested test cases
///-------------------------------------------------------------------------------------
///         Input1        Input2       ouput
///------------------------------------------------------------------------------------
///         23            30           108  
///
///         10            18           70
///          
///        -10            2            Invalid range
///
///         90            18           Invalid range
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

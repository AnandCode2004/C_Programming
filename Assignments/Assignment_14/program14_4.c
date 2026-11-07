/*
    Write a program which accept number from user and return summation of all its non factors.
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///   Function Name           :SumNonFact
///   Input                   :Integer
///   Output                  :Integer
///   Description             :perform sum of all non factors
///   Date                    :07/11/2026
///   Author                  :Anand Rashtrapal Ingle
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number : \n");
    if(scanf("%d" ,&iValue) !=1 )
    {
        printf("invalid input. \n");
    }

    iRet = SumNonFact(iValue);
    printf("%d\n" , iRet);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////       
///       
///        Tested test cases
///-------------------------------------------------------------------------------------
///         Input1             ouput
///------------------------------------------------------------------------------------
///         12                 50
///                           
///         10                 37
///                                                      
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
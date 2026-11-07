/*
    Write a program which accept number from user and return difference between summation of all its factors and non factors
*/

#include<stdio.h>
#include<stdlib.h>


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///   Function Name           :FactDiff
///   Input                   :Integer
///   Output                  :Integer
///   Description             :difference between summation of all its factors and non factors
///   Date                    :07/11/2026
///   Author                  :Anand Rashtrapal Ingle
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactorSum = 0;
    int iNonFactorSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)  // O(N)
    {
        if((iNo % iCnt) == 0)
        {
            iFactorSum = iFactorSum + iCnt;
        }
        else
        {
            iNonFactorSum = iNonFactorSum + iCnt;
        }
    }

    return(iFactorSum - iNonFactorSum);

}

// Time complexity : Brute Force – O(N) time

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number : \n");
    if((scanf("%d" , &iValue) != 1))
    {
        printf("Invalid input.\n");
    }

    iRet = FactDiff(iValue);
    printf("%d\n" , iRet);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////       
///       
///        Tested test cases
///-------------------------------------------------------------------------------------
///         Input1             ouput
///------------------------------------------------------------------------------------
///         12                 -34
///                           
///         10                 -29
///                                                      
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
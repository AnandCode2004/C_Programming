/*
    Write a program which accept number from usr and return the count of digits in between 3 and 7.
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///   Function Name           :CountRange
///   Input                   :Integer
///   Output                  :Integer
///   Description             :Count range of digit between 3 and 7
///   Date                    :06/11/2026
///   Author                  :Anand Rashtrapal Ingle
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number : \n");
    if((scanf("%d" , &iValue) !=1))
    {
        printf("Invalid input.\n");
    }

    iRet = CountRange(iValue);
    printf("%d\n" , iRet);

    
    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///        
///        Tested test cases
///-------------------------------------------------------------------------------------
///         Input1             ouput
///------------------------------------------------------------------------------------
///         2395               1
///                           
///         1018               0
///                             
///         4521               0                      
///                             
///         9922               0
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

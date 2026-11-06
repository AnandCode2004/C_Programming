/*
    Write a program which accept number from user and return the count of even digits.
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///   Function Name           :CountEven
///   Input                   :Integer
///   Output                  :Integer
///   Description             :Count of even digit
///   Date                    :06/11/2026
///   Author                  :Anand Rashtrapal Ingle
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
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

    printf("Enter number.\n");
    if((scanf("%d",&iValue) != 1))
    {
        printf("invalid input.\n");
    }

    iRet = CountEven(iValue);

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
///         1018               2
///                             
///        -1018               2                       
///                             
///         8462               4
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
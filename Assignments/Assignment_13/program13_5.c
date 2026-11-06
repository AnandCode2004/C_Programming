/*
    Write a program which accept number from user and return difference between summation of even digits and summation of Odd Digits
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///   Function Name           :CountDiff
///   Input                   :Integer
///   Output                  :Integer
///   Description             :diff between summation of even digits and summation of odd digits
///   Date                    :06/11/2026
///   Author                  :Anand Rashtrapal Ingle
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0;
    int isumofEven = 0;
    int isumofOdd = 0;
    int iDiff = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) == 0)
        {
            isumofEven = isumofEven + iDigit;
        }
        if ((iDigit % 2) != 0)
        {
            isumofOdd = isumofOdd + iDigit;
        }
        iNo = iNo / 10;

        iDiff = isumofEven - isumofOdd;
    }
    return iDiff;
}

int main()
{
    int iValue = 0  , iRet = 0;

    printf("Enter number : \n");
    if((scanf("%d" , &iValue) != 1))
    {
        printf("Invalid input.\n");
    }

    iRet = CountDiff(iValue);
    printf("%d\n" , iRet); 
    return EXIT_SUCCESS;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////        
///       
///        Tested test cases
///-------------------------------------------------------------------------------------
///         Input1             ouput
///------------------------------------------------------------------------------------
///         2395              -15
///                           
///         1018               6
///                             
///         8440               16                                     
///                             
///         5733              -18
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
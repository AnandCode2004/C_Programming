/*
    Write a program which accept number from user and count frequencey of 2 in it.
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///   Function Name           :CountTwo 
///   Input                   :Integer
///   Output                  :Integer
///   Description             :Check frequency of two 
///   Date                    :05/10/2026
///   Author                  :Anand Rashtrapal Ingle
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 2)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
  return iCount;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number.\n");
    if(scanf("%d" , &iValue) != 1)
    {
        printf("invalid input.\n");
    }

    iRet = CountTwo(iValue);
    printf("%d\n" , iRet);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///        
///        Tested test cases
///-------------------------------------------------------------------------------------
///         Input1             ouput
///------------------------------------------------------------------------------------
///         2395                1
///                           
///         1018                0
///                             
///         9000                0                       
///                             
///         922432              3
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
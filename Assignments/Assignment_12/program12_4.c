/*
    Write a program which accept number from user and count frequencey of 4 in it.
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///   Function Name           :CountFour 
///   Input                   :Integer
///   Output                  :Integer
///   Description             :check frquency of four
///   Date                    :05/10/2026
///   Author                  :Anand Rashtrapal Ingle
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 4)
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

    iRet = CountFour(iValue);
    printf("%d\n" , iRet);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///        
///        Tested test cases
///-------------------------------------------------------------------------------------
///         Input1             ouput
///------------------------------------------------------------------------------------
///         2395                0
///                           
///         1018                0
///                             
///         9440               0                       
///                             
///         922432              1
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
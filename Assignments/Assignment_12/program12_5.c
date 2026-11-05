/*
   Write a program which accept number form use and count frequencey of such a digits which are less than 6.
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///   Function Name           :Count
///   Input                   :Integer
///   Output                  :Integer
///   Description             :check frquency of four
///   Date                    :05/10/2026
///   Author                  :Anand Rashtrapal Ingle
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit < 6)
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

    iRet = Count(iValue);
    printf("%d\n" , iRet);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///        
///        Tested test cases
///-------------------------------------------------------------------------------------
///         Input1             ouput
///------------------------------------------------------------------------------------
///         2395                3
///                           
///         1018                3
///                             
///         9440                3                      
///                             
///         96672               1             
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
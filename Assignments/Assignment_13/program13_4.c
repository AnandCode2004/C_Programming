/*
    Write a program which accept number from user and return multiplication of all digits.
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///   Function Name           :MultDigits
///   Input                   :Integer
///   Output                  :Integer
///   Description             :Multiplication of all digits
///   Date                    :06/11/2026
///   Author                  :Anand Rashtrapal Ingle
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;
    

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iDigit++;
        }
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }

    return iMult;

}

int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter number : \n");
    if((scanf("%d" , &iValue) != 1))
    {
        printf("Invalid input.\n");
    }

    iRet =  MultDigits(iValue);
    printf("%d\n" , iRet);

    return EXIT_SUCCESS;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////        
///       
///        Tested test cases
///-------------------------------------------------------------------------------------
///         Input1             ouput
///------------------------------------------------------------------------------------
///         2395               270
///                           
///         1018               8
///                             
///         9440               144                                     
///                             
///         922432             864
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
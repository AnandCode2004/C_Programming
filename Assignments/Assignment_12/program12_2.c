/*
    Write a program which accept number from user and check whether is contains 0 in it or not
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///   Function Name           :checkZero 
///   Input                   :Integer
///   Output                  :Integer
///   Description             :Check wheter digit contains 0 or not
///   Date                    :05/10/2026
///   Author                  :Anand Rashtrapal Ingle
///
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void checkZero(int iNo)
{
    int iDigit = 0;
    int bFlag = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bFlag = 1;
            break;
        }
        iNo = iNo / 10;
    }

    if(bFlag == 1)
    {
        printf("it Contains Zero.\n");
    }
    else
    {
        printf("There is no Zero.\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number.\n");
    if(scanf("%d" , &iValue) != 1)
    {
        printf("invalid input");
    }
    
    checkZero(iValue);
    
    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///        
///        Tested test cases
///-------------------------------------------------------------------------------------
///         Input1             ouput
///------------------------------------------------------------------------------------
///         2395               there is no Zero  
///                           
///         1018               it contains Zero   
///                             
///         9000               it contains Zero                        
///                             
///         10687              it contains Zero
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Write a program which accept number from user and check whether is contains 0 in it or not
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool checkZero(int iNo)
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
        return true;  
    }
    else
    {
        return false;
    }

}

int main()
{

    int iValue = 0;
    bool bRet = false;

    printf("Enter number.\n");
    if(scanf("%d" , &iValue) != 1)
    {
        printf("invalid input");
    }

    bRet = checkZero(iValue);
    
    if(bRet == true)
    {
        printf("it contains zero.\n");
    }
    else
    {
        printf("there is no zero.\n");
    }
    

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
/*
    Write a program which accept two numbers and check wheter numbers are equal or not. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Function name:   CheckEqualOrNot
//     Input        :   Integer
//     Ouput        :   retrun true or false
//     Description  :   Check wheter two number is equal or not
//     Date         :   08/11/2026
//     Author       :   Anand Rashtrapal Ingle
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckEqualOrNot(int iNo1 , int iNo2)
{
    if (iNo1 == iNo2)
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
    int iValue1 = 0 , iValue2 = 0;
    bool bRet = false;

    printf("Enter first number : \n");

    if((scanf("%d" , &iValue1) != 1))
    {
        printf("First Input is  invalid.");
        return EXIT_FAILURE;
    }

    printf("Enter second number : \n");
    scanf("%d" , &iValue2);
    
    
   
    bRet = CheckEqualOrNot(iValue1,iValue2);

    if(bRet == true)
    {
        printf("Equal.\n");
    }
    else
    {
        printf("Not Equal.\n");
    }

    return EXIT_SUCCESS;

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////       
///       
///        Tested test cases
///-------------------------------------------------------------------------------------
///         Input1             output
///------------------------------------------------------------------------------------
///         10 10            Equal  
///                           
///         10 12            Not Equal
///                                                      
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


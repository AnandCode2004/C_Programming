/*
    Write a program which accept one number from user and check wheter that number is greater than 100 or not.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Function name:   CheckNum
//     Input        :   Integer
//     Ouput        :   retrun true or false
//     Description  :   Check wheter number is greater than 100 or not
//     Date         :   08/11/2026
//     Author       :   Anand Rashtrapal Ingle
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckNum(int iNo)
{
    iNo = abs(iNo);

    if(iNo > 100)
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

   printf("Enter number : \n");
   if((scanf("%d" , &iValue) != 1))
   {
        printf("Invalid input.\n");
   }  
 
    bRet = CheckNum(iValue);
   
    if(bRet == true)
    {
       printf("Greater.\n");
    }
    else
    {
        printf("Smaller.\n");
    }

   return EXIT_SUCCESS; 
   
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////       
///       
///        Tested test cases
///-------------------------------------------------------------------------------------
///         Input1             ouput
///------------------------------------------------------------------------------------
///         101                Greater
///                           
///         39                 Samller
///                                                      
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
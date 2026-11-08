/*
    Write a program which accept theree number and print its multiplication.
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Function name:   Mult
//     Input        :   Integer
//     Ouput        :   Integer
//     Description  :   Perform multiplication
//     Date         :   08/11/2026
//     Author       :   Anand Rashtrapal Ingle
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Mult(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;

    if(iNo1 != 0)
    {
        iMult = iMult * iNo1;
    }

    if(iNo2 != 0)
    {
        iMult = iMult * iNo2;
    }

    if(iNo3 != 0)
    {
        iMult = iMult * iNo3;
    }

    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        iMult = 0;
    }

    return iMult;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0, iValue3 = 0 , iRet = 0;
    printf("Enter three number : \n ");
    scanf("%d %d %d" ,&iValue1, &iValue2, &iValue3);

    iRet = Mult(iValue1, iValue2, iValue3);
    printf("%d\n" , iRet);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////       
///       
///        Tested test cases
///-------------------------------------------------------------------------------------
///         Input1             output
///------------------------------------------------------------------------------------
///         5 4 7              140  
///                           
///         5 0 7              35
/// 
///         0 0 0               0                                                     
///                                                             
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


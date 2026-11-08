/*
    Write a program which accept total marks & obtained marks form user and calculate percentage.
*/


#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Function name:   Percentage
//     Input        :   Integer,Integer
//     Ouput        :   float
//     Description  :   Calculate percentage
//     Date         :   08/11/2026
//     Author       :   Anand Rashtrapal Ingle
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



float Percentage(int iTotal, int iObtained)
{
    // Handle the condition if total marks is 0 to avoid runtime error
    if(iTotal == 0)
    {
        return 0.0;
    }
    
    // Calculate and return percentage
    float fAns = 0.0f;
    fAns = ((float)iObtained / (float)iTotal) * 100;
    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;
    
    printf("Please enter total marks: \n");
    scanf("%d", &iValue1);
    
    printf("Please enter obtained marks: \n");
    scanf("%d", &iValue2);
    

    fRet = Percentage(iValue1, iValue2);
    

    printf("Percentage is : %.1f%%\n", fRet);
    
    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////       
///       
///        Tested test cases
///-------------------------------------------------------------------------------------
///         Input1    Input2         output
///------------------------------------------------------------------------------------
///     
///         1000       745             74.5%                                            
///                                                             
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


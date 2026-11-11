/*
    Accept number of rows and number and columns from user and display below pattern.
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Function name:   pattern
//     Input        :   Integer,Integer
//     Ouput        :   (None display pattern)
//     Description  :   Display pattern
//     Date         :   10/11/2026
//     Author       :   Anand Rashtrapal Ingle
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void pattern(int iRows , int iCol)
{
    int i = 0 , j = 0;
    char ch = '\0';

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1,ch = 'A'; j <= iCol; j++,ch++)
        {
            printf("%c\t" , ch);
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d" , &iValue1);

    printf("Enter number of columns : \n");
    scanf("%d" , &iValue2);

    pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////       
///       
///      Input  :     iRow = 4        iCol = 4
///      
///      Output :      A       B       C       D
///
///                    A       B       C       D
///                    
///                    A       B       C       D
///                    
///                    A       B       C       D
//                                        
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
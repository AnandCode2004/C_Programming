/* 
    Accept number of rows and number of columns from user and display belwo pattern.
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Function name:   Pattern
//     Input        :   Integer,Integer
//     Ouput        :   (None display pattern)
//     Description  :   Display pattern
//     Date         :   11/11/2026
//     Author       :   Anand Rashtrapal Ingle
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow , int iCol)
{
    int i = 0,  j = 0;

    char Ch = '\0';
    char ch = '\0';
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,Ch = 'A',ch = 'a';  j <= iCol;  j++,ch++,Ch++)
        {
            if (i % 2 != 0)
            {
                printf("%c\t", Ch);
            }
            else
            {
                printf("%c\t", ch);
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    
    printf("Enter number of rows : \n");
    scanf("%d" , &iValue1);

    printf("Enter number of columns : \n");
    scanf("%d" , &iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////       
///       
///      Input  :     iRow = 4        iCol = 4
///      
///      Output :      A       B       C       D
///
///                    a       b       c       d
///                    
///                    A       B       C       D
///                    
///                    a       b       c       d
///                                       
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
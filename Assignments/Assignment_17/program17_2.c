/*
    Accept number of rows and number of columns form user and display below pattern.
*/

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Function name:   Pattern
//     Input        :   Integer,Integer
//     Ouput        :   (None display Numbers)
//     Description  :   Display pattern
//     Date         :   11/11/2026
//     Author       :   Anand Rashtrapal Ingle
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    int iCount = 1;

    for (i = 1; i <= iRow; i++)
    {
        if (i % 2 != 0)
        {
            iCount = 2;
        }
        else
        {
            iCount = 1;
        }
        
        for (j = 1; j <= iCol; j++)
        {

            printf("%d\t", iCount);
            iCount = iCount + 2;
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d", &iValue1);

    printf("Enter number of columns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///      Input  :     iRow = 4       iCol = 4
///
///      Output :   2      4        6       8    10
///
///                 1      3        5       7    9
///
///                 2      4        6       8    10
///
///                 1      3        5       7    9
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
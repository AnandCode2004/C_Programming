/*
    Accept number of rows and number of columns form user and Display below pattern
*/

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Function name:   Pattern
//     Input        :   Integer,Integer
//     Ouput        :   (None display Symbols)
//     Description  :   Display pattern
//     Date         :   12/11/2026
//     Author       :   Anand Rashtrapal Ingle
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol)
{
    int i = 0 , j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }

        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///      Input  :     iRow = 4      iCol = 4
///
///      Output :     
///
///                        $       *       *       *
///                        
///                        *       $       *       *
///                        
///                        *       *       $       *
///                        
///                        *       *       *       $
///            
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
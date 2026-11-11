
/*
    Accept number of rows and number of columns from user and display below pattern.
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Function name:   pattern
//     Input        :   Integer,Integer
//     Ouput        :   (None display pattern)
//     Description  :   Display pattern
//     Date         :   11/11/2026
//     Author       :   Anand Rashtrapal Ingle
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;

    char ch = '\0';
    
    for(i = 1,ch = 'A';  i <= iRow;  i++,ch++)
    {
        for(j = 1; j <= iCol;  j++)
        {
            printf("%c\t" , ch);
        }
        printf("\n\n");
    }
}

int main()
{

    int iValue1 = 0 , iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d" , &iValue1);

    printf("Enter number of rows : \n");
    scanf("%d" , &iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////       
///       
///      Input  :     iRow = 3        iCol = 5
///      
///      Output :   A       A       A       A       A
///
///                 B       B       B       B       B
///
///                 C       C       C       C       C
///                                       
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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

 
    
    for(i = iRow;  i >= 1;  i--)
    {
        for(j = 1; j <= iCol;  j++)
        {
            printf("%d\t" ,i);
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
///      Input  :     iRow = 4        iCol = 4
///      
///      Output :   4       4       4       4
///
///                 3       3       3       3
///
////                2       2       2       2
////
////                1       1       1       1
///                                       
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

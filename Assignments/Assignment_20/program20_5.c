#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//     Function name:   Pattern
//     Input        :   Integer,Integer
//     Ouput        :   (None display Numbers)
//     Description  :   Display pattern
//     Date         :   13/11/2026
//     Author       :   Anand Rashtrapal Ingle
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol )
            {
                printf("%d\t", j);                
            }
            else if (i == j )
            {
                printf("%d\t" , j);
            }
            else
            {
                printf(" \t");
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Input  :     iRow = 5     iCol = 5
//
//      Output :     
//                     
//                    1       2       3       4       5
//                    
//                    1       2                       5
//                    
//                    1               3               5
//                    
//                    1                       4       5
//                    
//                    1       2       3       4       5
//                                                      
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
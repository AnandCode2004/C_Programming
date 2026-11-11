/*
    Accept number of rows and number of columns from user and display below pattern.
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;

   
        for(j = 1; j <= iCol*iRow; j++)
        {
            printf("%d\t", j);
            if(j == iCol)
            {
                printf("\n");
            }
            if(j == iCol+iCol)
            {
                printf("\n");
            }
        }
        printf("\n");
      
        
      
    
}

int main()
{   
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d" , &iValue1);

    printf("Enter number of columns : \n");
    scanf("%d" , &iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}
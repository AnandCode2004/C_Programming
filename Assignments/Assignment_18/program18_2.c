/*
    Accept number of rows and number of columns form user and Display below pattern
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i = 0 , j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i+j == 6)
            {
                printf("#\t");
            }
            else if(i+j == 7)
            {
                printf("#\t");
            }
            else if(i+j == 8)
            {
                printf("#\t");
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
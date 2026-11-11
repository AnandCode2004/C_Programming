#include<stdio.h>
#include<stdlib.h>

void Pattern (int iRow , int iCol)
{
    int i  = 0;
    for(i = 1; i <= iCol; i++)
    {
        printf("A\tB\tC\tD\t");
        printf("\n");
    }
  
}   

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter number of rows and colmns : \n");
    scanf("%d %d" , &iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}
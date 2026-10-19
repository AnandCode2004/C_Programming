#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
     int iCnt = 0;
     
     iCnt = 1;
     while (iNo >= iCnt)
     {
        printf("*\t");
        iCnt--;
     }
     
}

int main()
{ 
    int iValue;
    printf("Enter frequence\n");
    scanf("%d" , &iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}
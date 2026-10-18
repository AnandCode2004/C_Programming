// print jay ganesh multiple times

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh....\n");
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
/* Write a program  which accept  one number from user and print that number of even numbers on screnn*/

#include<stdio.h>
#include<stdlib.h>


void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
            if ((iNo % iCnt == 0) && (iCnt % 2 == 0))
            {
              printf("%d\t" , iCnt);
            }
    }
} 

int main ()
{
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d" , &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}


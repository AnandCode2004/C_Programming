#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void CheckPrime(int iNo)
{
     int iCnt = 0;
     int iSum = 0;

     for (iCnt = 1; iCnt <= iNo/2; iCnt++)
     {
        if ((iNo % iCnt) == 0)
        {
           
            iSum += iCnt;
        }
     }

    if (iSum == 1)
    {
        printf("it is a prime number\n");
    }
    else
    {
        printf("it is not a prime number\n");
    }
}
int main(void) /*void means function is not going to accept anything*/
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d" , &iValue);

    CheckPrime(iValue);

    return EXIT_SUCCESS;
}



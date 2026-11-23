#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum += iCnt;
        }
    }

    if(iSum == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d" , &iValue);

    CheckPrime(iValue);

    if(bRet == true)
    {
        printf("it is prime number\n");
    }
    else
    {
        printf("it is not prime number\n");
    }
    return EXIT_SUCCESS;
}
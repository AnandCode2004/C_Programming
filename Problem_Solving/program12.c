#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
     int iCnt = 0;
  

     for (iCnt = 2; iCnt <= iNo/2; iCnt++)
     {
        if ((iNo % iCnt) == 0)
        {
            break;  // loop chay baher zato
        }
     }

     if(iCnt == (iNo/2) + 1)
     {
        return true;
     } 
     else
     {
        return false;
     }

   
}
int main(void) 
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter number: \n");
    scanf("%d" , &iValue);

    bRet = CheckPrime(iValue);

    if(bRet) 
    {
        printf("it is a prime number\n");
    }
    else
    {
        printf("it is not a prime number\n");
    }

   

    return EXIT_SUCCESS;
}



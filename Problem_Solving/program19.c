#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckEven(int iNo)
{
        if ((iNo % 2 )== 0)
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
    printf("Enter a number\n");
    scanf("%d", &iValue);
    bRet = CheckEven(iValue);

    if (bRet == true)
    {
        printf("Number is even...");
    }
    else
    {
        printf("Number is odd....");
    }
    
   
    return EXIT_SUCCESS;
}
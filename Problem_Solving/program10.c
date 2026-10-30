#include<stdio.h>
#include<stdlib.h>

int main()
{
     int iRet = 0;
     int iNo = 0;
     printf("Enter a Number: \n");
     iRet = scanf("%d", &iNo);

     printf("iValue is :%d\n",iRet);

    return EXIT_SUCCESS;
}
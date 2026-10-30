#include<stdio.h>
#include<stdlib.h>

int main()
{
     int iRet = 0;
     int iValue = 0;
     printf("Enter a Number: \n");
     iRet = scanf("%d", &iValue);

     printf("Return value of scanf: %d\n",iRet);

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

int Factorail(int iNo)
{
    int iCnt = 0;
    
    int iFact = 0;

    for(iCnt = 1,iFact = 1; iCnt <= iNo; iCnt++)
    {
        
        iFact = iFact * iCnt;
        
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorail(iValue);

    printf("Factorail is : %d\n" , iRet);

    
    return EXIT_SUCCESS;
}
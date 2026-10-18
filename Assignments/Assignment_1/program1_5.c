#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    
    // Filled in the blanks here
    for( iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;
    
    Accept(iValue); // This will print *****
    return 0;
}

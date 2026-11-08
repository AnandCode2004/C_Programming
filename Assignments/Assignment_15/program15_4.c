/*
    Write a program which accept theree number and print its multiplication.
*/
/* this code failed at condition 4*/
#include<stdio.h>
#include<stdlib.h>

int Mult(int iNo1 , int iNo2 , int iNo3)
{
    int iMult = 1;

    if (iNo1 == 0)
    {
        iMult =  iNo2 * iNo3;
    }
    else if(iNo2 == 0)
    {
        iMult = iNo1 * iNo3;
    }
    else if(iNo3 == 0)
    {
        iMult = iNo1 * iNo2;
    }
    else if((iNo2 == 0) && (iNo3 == 0))
    {
        iMult = iMult * iNo1;
    }
    else
    {
        iMult = iNo1 * iNo2 * iNo3;
    }


    return iMult;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0, iValue3 = 0 , iRet = 0;
    printf("Enter three number : \n ");
    scanf("%d %d %d" ,&iValue1, &iValue2, &iValue3);

    iRet = Mult(iValue1, iValue2, iValue3);
    printf("Multiplication of three number is : %d\n" , iRet);

    return EXIT_SUCCESS;
}
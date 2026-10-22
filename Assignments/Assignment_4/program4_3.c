#include<stdio.h>
#include<stdlib.h>

void findGreater(int iNo1 , int iNo2)
{
    if (iNo1 > iNo2 )
    {
        printf("%d" , iNo1);
    }
    else
    {
        printf("%d" , iNo2);
    }


}


int main ()
{

    int iValue1, iValue2;
    printf("Enter a number : \n");
    scanf("%d" , &iValue1);

    printf("Enter a number : \n");
    scanf("%d" , &iValue2);

    findGreater(iValue1 , iValue2);
    
    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

void checkEven(int iNo)
{
    if (iNo % 2 == 0 )
    {
        printf("%d is a even number\n" , iNo);
    }
    else
    {
      
        printf("%d is a odd number\n" , iNo);
    }


}


int main ()
{

    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d" , &iValue);

    checkEven(iValue);
    
    return EXIT_SUCCESS;
}
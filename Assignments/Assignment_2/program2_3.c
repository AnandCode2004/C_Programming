#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
     if (iNo < 10)
     {
        printf("Hello\n");
     }
     else 
     {
        printf("Demo\n");
     }
}

int main()
{ 
    int iValue;
    printf("Enter frequence\n");
    scanf("%d" , &iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}
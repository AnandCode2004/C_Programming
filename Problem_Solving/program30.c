#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];  
    int  iAGe = 0;
    float fMarks = 0.0f;

    printf("Enter your Name :\n");
    scanf("%[^'\n']s" , sName);

    printf("Enter your AGe :\n");
    scanf("%d" , &iAGe);

    printf("Enter your Marks :\n");
    scanf("%f" ,&fMarks );

    printf("Welcome %s\n" , sName);
    printf("Your age is : %d\n" , iAGe);
    printf("Your marks is :  %.2f\n" , fMarks);

    return EXIT_SUCCESS;
}
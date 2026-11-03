#include<stdio.h>
#include<stdlib.h>

int main()
{
char sName[30];  /*we can store 29 characters only and one '\0' which indicates end of String*/ 

    printf("Enter your name :\n");
    scanf("%[^'\n']s" , sName);

    printf("Welcome %s\n" , sName);

    return EXIT_SUCCESS;
}
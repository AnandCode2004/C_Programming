/*
    Write a program which accept name from user and print that name.
*/ 
#include<stdio.h>
#include<stdlib.h>


#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name : \n");
    scanf("%29[^'\n']s", Name);

    printf("Your name is %s\n", Name);

    return 0;
}

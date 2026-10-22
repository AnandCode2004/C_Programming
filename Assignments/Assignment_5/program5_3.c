#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fmarks )
{
    if ((fmarks >= 90) && (fmarks <= 100))
    {
        printf("Grade A\n");
    } 
    else if ((fmarks >= 75) && (fmarks <= 89))
    {
        printf("Grade B\n");
    } 
    else if((fmarks >= 60) && (fmarks <= 74))
    {
        printf("Grade C\n");
    } 
    else if((fmarks >= 40) && (fmarks <= 59))
    {
        printf("Grade D\n");
    } 
    else if(fmarks < 40)
    {
        printf("Fail\n");
    } 
    else
    {
        printf("invalid marks\n");
    }
}


int main(void)
{
    float fmarks = 0.0f; // defualt value
    printf("Enter marks: ");
    scanf("%f" , &fmarks);

    DisplayGrade(fmarks);

    return EXIT_SUCCESS;
}
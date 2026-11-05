/*
Write a program which accept radius of circle from user and calculate its Area. 
consider value of PI as 3.14. (Area = PI * Radius * Radius) 
*/

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    double PI = 3.14;
    double darea = 0.0;

    darea = PI * fRadius * fRadius;

    return darea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : \n");
    if(scanf("%f",&fValue) !=1)
    {
        printf("inValid inPut\n");
    }

    dRet = CircleArea(fValue);
    printf("Area of Cirle is : %.4f\n", dRet);

    return EXIT_SUCCESS;
}
////////////////////////////////////////////////
///////////////////////////////////////////////
////
////     First 100 units ----> $5 per unit
////     Next  100 units  ----> $7 per unit
////     Above 200 units ----> $10 per unit
////
////
////    Expected output:
////    
////    input: 80 --->  Bill = 400.00             // 80 * 5 = 400.00
////    input: 150 ---> Bill = 850.00             // 100 * 5 = 500 , next 50 * 7 = 350 ,
////                                              //  500 + 350 = 850.0
////    
////    input: 250 ---> Bill = 1700.00            // first 100 * 5 = 500 , next 100 * 7 = 700 , 50 * 10 = 500
////                                              //  500 + 700 + 500 = 1700
////   Assignments/Assignment_6/program6_1.c
////
////////////////////////////////////////////////
///////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(float fUnits)
{
    float fBill = 0.0f;

    // 1. Validation check first
    if (fUnits < 0)
    {
        printf("Invalid units\n");
        return; // Exit the function early if input is bad
    }

    // 2. Clear, non-overlapping math blocks
    if (fUnits <= 100)
    {
        fBill = fUnits * 5;
    }
    else if (fUnits <= 200) // We already know it's > 100 because the first 'if' failed
    {
        fBill = 500 + (fUnits - 100) * 7;
    } 
    else // We already know it's > 200 because the previous blocks failed
    {
        fBill = 500 + 700 + (fUnits - 200) * 10;
    } 

    // 3. Single print statement with perfect .2f decimal precision
    printf("Bill = %.2f\n", fBill);
}


int main ()
{   
    float fUnits = 0;
    printf("Electricity units consumed:\n");
    scanf("%f", &fUnits);

    CalculateElectricityBill(fUnits);

    return EXIT_SUCCESS;
}
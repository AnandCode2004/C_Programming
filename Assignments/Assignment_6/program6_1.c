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
////   
////
////////////////////////////////////////////////
///////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(float fUnits)
{

        float fBill  = 0.0f;
        if ((fUnits >= 0) && (fUnits <= 100))
        {
            fBill = fUnits * 5;
            printf(" Bill = %f\n" , fBill);

        }
        else if ((fUnits >= 100) && (fUnits <= 200))
        {
            fBill = 500 + (fUnits - 100) * 7;
            printf(" Bill = %f\n", fBill);
        } 
        else if (fUnits >= 200)
        {
            fBill = 500 + 700 + (fUnits - 200) * 10;
            printf("Bill = %f\n", fBill);
        } 
        else
        {
            printf("invalid units\n");
        }
}

int main ()
{   
    float fUnits = 0;
    printf("Electricity units consumed:\n");
    scanf("%f", &fUnits);

    CalculateElectricityBill(fUnits);

    return EXIT_SUCCESS;
}
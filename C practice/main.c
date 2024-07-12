#include <stdio.h>
#include <stdlib.h>


void TaxCalculator(float GrossSalary, float TotalSavings, float TaxableIncome){
TaxableIncome = GrossSalary - TotalSavings;

    printf("Enter Your Gross Salary\n");
    scanf("%f", &GrossSalary);


    printf("Enter Your Total Savings\n");
    scanf("%f", &TotalSavings);

if(TotalSavings>100000){
    printf("You can not save more than Rs 100,000");
}
}

int main()
{
    float GrossSalary;
    float TotalSavings;
    float TaxableIncome;


    if(TaxableIncome<100000){
        printf("Your Tax is 0");
    }else if(TaxableIncome>100000 && TaxableIncome<200000){
    printf("Your tax is: (TaxableIncome - 100000) * 0.1");
    }else if(TaxableIncome>200000 && TaxableIncome<500000){
    printf("Your tax is: (TaxableIncome - 200000) * 0.2");
    }



    TaxCalculator(GrossSalary, TotalSavings, TaxableIncome);
    printf("Your Taxable Income is: %f", TaxableIncome);

    return 0;
}

//// Multiplication Table Program using For loop
//
#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//    int type, start, end;
//    int i;
//
//    printf("Enter the Type Value: ");
//    scanf("%d", &type);
//
//    printf("Enter the Start Value: ");
//    scanf("%d", &start);
//
//    printf("Enter the End Value: ");
//    scanf("%d", &end);
//
//    for(i = start; i <= end; i++) {
//        printf("\n %d * %d = %d", i, type, i * type);
//
//        if(i > end - 1){
//        printf("\n End of the Table\n");
//        }
//
//    }
//}
///


//program to Calculate the total bank deposit ammount as 2000 with the annually interest rate of 10% using a do While statement

int main(){
    int year;
    float initialDeposit, interestRate, targetDeposit, deposit, interest;

    printf("Initial Deposit?");
    scanf("%f", &initialDeposit);
    printf("Rate Of Interest?");
    scanf("%f", &interestRate);
    printf("Target Deposit?");
    scanf("%f", &targetDeposit);

    deposit = initialDeposit;
    year = 0;

    do{
        year++;
        interest = deposit * interestRate/100;
        deposit += interest;


    } while (deposit <= targetDeposit);
    printf("\nDeposit first exceeds %7.2f at the "
           "end of the year %2d", targetDeposit, year);
}

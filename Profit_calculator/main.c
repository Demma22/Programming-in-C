#include <stdio.h>
#include <stdlib.h>


//Create a C Program that will calculate the profit on a
//transaction. A user should be able to take Quantity,
// Buying Price and Selling Price

int main()
{
   int quantity;
   float buying_price, selling_price;

   printf("Enter the Quantity: ");
   scanf("%d", &quantity);

   printf("Enter the Buying Price: ");
   scanf("%f", &buying_price);

   printf("Enter the Selling Price: ");
   scanf("%f", &selling_price);

   float total_cost = quantity * buying_price;
   float total_sales = quantity * selling_price;
   float profit = total_sales - total_cost;

   printf("The profit on the transaction is: %f", profit);

   return 0;
}

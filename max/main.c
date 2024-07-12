#include <stdio.h>
#include <stdlib.h>

double max(double a, double b) {
   return (a>b) ? a:b;
}

int main()
{
    double a, b, maximum;
    printf("Enter First Value: ");
    scanf("%lf", &a);

    printf("Enter Second Value: ");
    scanf("%lf", &b);

    maximum = max(a,b);

    printf("The maximum value is: %.2lf\n", maximum);
    return 0;
}

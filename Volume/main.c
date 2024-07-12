#include <stdio.h>
#include <stdlib.h>

 double results;

 void getVolume(double length, double height, double width){
     results = length * height * width;
    }

int main()
{
    double length, height, width;

    printf("Enter the Length: ");
    scanf("%lf", &length);

    printf("Enter the Width: ");
    scanf("%lf", &width);

    printf("Enter the Height: ");
    scanf("%lf", &height);


    getVolume(length, height, width);

    printf("The Volume is %lf", results);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int isEven(int n){
    if(n%2 == 0){
        return true;
    }else {
        return false;
        }
}

int main()
{
    int n;

    printf("Enter A Number: ");
    scanf("%d", &n);

    isEven(n);

    if(n%2 == 0){
        printf("Number is Even \n");
    }else {
    printf("Number is not Even \n");
    }

    return 0;
}

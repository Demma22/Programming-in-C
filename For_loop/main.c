#include <stdio.h>
#include <stdlib.h>

int main()
{
    int correct_password = 12345;
    int input_password;
    int attempts = 3;

    for (int i = 0; i < attempts; i++) {      //loop variable i increments by one

        printf("Enter The Password: ");
        scanf("%d", &input_password);

        if(input_password == correct_password){
        printf("Access Granted!\n");
        return 0;
        } else {
        printf("Wrong Password. ");
            if(i < attempts - 1){         //If the current attempt is not the last one
                printf("Try Again.\n");

            }
        }
    }

    printf("Access Denied.\n"); //if all attempts are used
    return 0;
}

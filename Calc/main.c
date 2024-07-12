#include <stdio.h>
#include <stdlib.h>

void action(int first_number, int second_number, char oper, int *answer) {
    switch (oper) {
        case '+':
            *answer = first_number + second_number;
            break;
        case '-':
            *answer = first_number - second_number;
            break;
        case '*':
            *answer = first_number * second_number;
            break;
        case '/':
            if (second_number != 0) {
                *answer = first_number / second_number;
            } else {
                printf("Division by zero error!\n");
                *answer = 0; // Default value
            }
            break;
        case '%':
            *answer = first_number % second_number;
            break;
        default:
            printf("Enter a valid operator\n");
            *answer = 0; // Default value
            break;
    }
}

int main() {
    int first_number;
    int second_number;
    char oper;
    int answer;

    printf("Enter First Number: ");
    scanf("%d", &first_number);
    printf("Enter Second Number: ");
    scanf("%d", &second_number);
    printf("Enter Operator (+, -, *, /, %): ");
    scanf(" %c", &oper);  // Note the space before %c to ignore any whitespace

    action(first_number, second_number, oper, &answer);

    // Only print the result if the operation was valid and answer was updated
    if (oper == '+' || oper == '-' || oper == '*' || oper == '/' && second_number != 0 || oper == '%') {
        printf("The result is: %d\n", answer);
    }

    return 0;
}

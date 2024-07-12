#include <stdio.h>

void displayGrade(float marks) {
    if (marks >= 91 && marks <= 100) {
        printf("Grade: AA\n");
    } else if (marks >= 81 && marks <= 90) {
        printf("Grade: AB\n");
    } else if (marks >= 71 && marks <= 80) {
        printf("Grade: BB\n");
    } else if (marks >= 61 && marks <= 70) {
        printf("Grade: BC\n");
    } else if (marks >= 51 && marks <= 60) {
        printf("Grade: CD\n");
    } else if (marks >= 41 && marks <= 50) {
        printf("Grade: DD\n");
    } else if (marks <= 40) {
        printf("Grade: Fail\n");
    } else {
        printf("Invalid marks entered.\n");
    }
}

int main() {
    float math, physics, biology, chemistry;

    printf("Enter marks for Math (out of 100): ");
    scanf("%f", &math);
    if (math < 0 || math > 100) {
        printf("Invalid marks. Please enter marks between 0 and 100.\n");
        return 1;
    }

    printf("Enter marks for Physics (out of 100): ");
    scanf("%f", &physics);
    if (physics < 0 || physics > 100) {
        printf("Invalid marks. Please enter marks between 0 and 100.\n");
        return 1;
    }

    printf("Enter marks for Biology (out of 100): ");
    scanf("%f", &biology);
    if (biology < 0 || biology > 100) {
        printf("Invalid marks. Please enter marks between 0 and 100.\n");
        return 1;
    }

    printf("Enter marks for Chemistry (out of 100): ");
    scanf("%f", &chemistry);
    if (chemistry < 0 || chemistry > 100) {
        printf("Invalid marks. Please enter marks between 0 and 100.\n");
        return 1;
    }

    printf("\nGrades:\n");
    printf("Math: ");
    displayGrade(math);
    printf("Physics: ");
    displayGrade(physics);
    printf("Biology: ");
    displayGrade(biology);
    printf("Chemistry: ");
    displayGrade(chemistry);

    return 0;
}

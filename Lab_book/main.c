#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *file, *copy;

    if (argc != 3) {
        printf("Argument number error. \n");
        return 1;
    }

    file = fopen(argv[1], "r");
    copy = fopen(argv[2], "w");

    if (file == NULL || copy == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF)
        fputc(ch, copy);

    fclose(file);
    fclose(copy);


    return 0;
    }

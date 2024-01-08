#include <stdio.h>

int main() {
    char string[] = "Hello World!";
    int i = 0;

    char currentChar = string[i];
    const char endOfString = '\0';

    while (currentChar != endOfString) {
        printf("Ascii value is %d \n", currentChar);
        i++;
        currentChar = string[i];
    }

    return 0;
}


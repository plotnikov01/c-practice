#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Constants for messages
const char* REAL_ROOTS_MESSAGE = "Real roots found";
const char* COMPLEX_ROOTS_MESSAGE = "Complex roots found";
const char* DISCRIMINANT_LESS_THAN_ZERO_MESSAGE = "Discriminant < 0, complex roots";
const char* NOT_ENOUGH_VALUES_MESSAGE = "Not enough values, enter 3 numbers";
const char* TOO_MANY_VALUES_MESSAGE = "Too many values, enter 3 numbers";

struct CalculationResult {
    int result;
    int isSuccess;
    int x1;
    int x2;
    char message[100];
};

struct CalculationResult discriminantCalculator(int a, int b, int c) {
    struct CalculationResult result;

    int discriminant = pow(b, 2) - 4 * a * c;
    printf("Discriminant = %d \n", discriminant);

    if (discriminant >= 0) {
        result.x1 = (-b + sqrt(discriminant)) / (2 * a);
        result.x2 = (-b - sqrt(discriminant)) / (2 * a);
        result.isSuccess = 1;
        snprintf(result.message, sizeof(result.message), "%s", REAL_ROOTS_MESSAGE);
    } else {
        result.isSuccess = 0;
        snprintf(result.message, sizeof(result.message), "%s", COMPLEX_ROOTS_MESSAGE);
    }

    return result;
}

void validateInput(int argc, char* argv[], int* a, int* b, int* c) {
    if (argc < 4) {
        printf("%s\n", NOT_ENOUGH_VALUES_MESSAGE);
        exit(1);
    } else if (argc > 4) {
        printf("%s\n", TOO_MANY_VALUES_MESSAGE);
        exit(1);
    } else {
        *a = atoi(argv[1]);
        *b = atoi(argv[2]);
        *c = atoi(argv[3]);
    }
}

int main(int argc, char* argv[]) {
    int a, b, c;
    validateInput(argc, argv, &a, &b, &c);

    struct CalculationResult result = discriminantCalculator(a, b, c);

    printf("Result: %s\n", result.isSuccess ? "Success" : "Failure");
    if (result.isSuccess) {
        printf("Roots: x1 = %d, x2 = %d\n", result.x1, result.x2);
    } else {
        printf("Message: %s\n", result.message);
    }

    return 0;
}


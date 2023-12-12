#include <stdio.h>
#include <stdlib.h>

int fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main(int argc, char *argv[]) {
    double fahrenheit = atof(argv[1]);

    double celsius = fahrenheitToCelsius(fahrenheit);
    printf("%.2f Fahrenheit  = %.2f Celsius \n", fahrenheit, celsius);

    return 0;
}

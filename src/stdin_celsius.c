#include <stdio.h>

int fahrenheitToCelsius(double fahrenheit) {
	return (fahrenheit - 32) / 1.8;
}

int main() {
	double fahrenheit;
	
	printf("Enter number in fahrenheit: ");
	scanf("%lf", &fahrenheit);

	double celsius = fahrenheitToCelsius(fahrenheit);
	printf("%.2f Fahrenheit  = %.2f Celsius \n", fahrenheit, celsius);

	return 0;	
}

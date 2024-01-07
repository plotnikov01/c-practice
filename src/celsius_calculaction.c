#include <stdio.h>

int celsiusToFahrenheitConversion(int celsius) {
	return (celsius * 1.8) + 32;
}

int main() {
        int startTemp = 10;
        int endTemp = 200;

	 while(startTemp <= endTemp) {
		int celsius = startTemp;
		int fahrenheit = celsiusToFahrenheitConversion(celsius);

		printf("Fahrenheit = %d Celsius = %d \n", fahrenheit, celsius);
		startTemp++;
	}

        return 0;
}

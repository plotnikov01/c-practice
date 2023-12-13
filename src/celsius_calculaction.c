#include <stdio.h>

int main(){
	int startTemp = 10;
	int endTemp = 200;
	int i = 0;

	while(startTemp <= endTemp) {
		int fahrenheit = startTemp;
		int celsius = (fahrenheit - 32) / 1.8;

		printf("Fahrenheit = %d Celsius = %d \n", fahrenheit, celsius);
		startTemp++;
	}

	return 0;
}

#include <stdio.h>

#define SIZEOF(arr) sizeof(arr) / sizeof(*arr)

int sumArray(int arr[], int arraySize) {
	int sum = 0;

	for(int i = 0; i < arraySize; i++) {
		sum += arr[i];
	}

	return sum;
}

int multiplyArray(int arr[], int arraySize) {
        int res = 0;
	int x;

        printf("Enter number x for multiply an array : ");
        scanf("%d", &x);
	
        for(int i = 0; i < arraySize; i++) {
                res += x * arr[i];
        }

        return res;
}

void printIntArray(int arr[], int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		printf("%d \n", arr[i]);
	}
}

void printCharArray(char *arr[], int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		printf("%s \n", arr[i]);
	}
}

int main() {
	int numbers[] = {1, 3, 5, 9, 10, 20, 100, 1, 14, 12, 2};
 	char *strings[] = {"Hello", "World", "or", "Hello", "Sasha"};

	int numbersCount = SIZEOF(numbers);
	int stringsCount = SIZEOF(strings);

	int numbersSum = sumArray(numbers, numbersCount);
	int numbersMultiply = multiplyArray(numbers, numbersCount);

	printf("Sum of numbers arraydd: %d \n", numbersSum);
	printf("Result of multiply numbers array:  %d \n", numbersMultiply);

	printIntArray(numbers, numbersCount);
	printCharArray(strings, stringsCount);

	return 0;
}

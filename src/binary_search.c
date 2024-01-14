#include <stdio.h>

int binarySearch(int *arr, int low, int high, int item) {
        while(low <= high) {
                int mid = (low + high) / 2;
                int guess = arr[mid];

                if (guess == item) {
                        printf("%d \n", guess);
                        return guess;
                        break;
                } else if (guess > item) {
                        printf("%d \n", guess);
                        high = mid - 1;
                } else {
                        printf("%d \n", guess);
                        low = mid + 1;
                }
        }

	return 1;
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int low = 0;
	int high = sizeof(arr) / sizeof(*arr);
	int item = 10; 

	binarySearch(arr, low, high, item);

	return 0;
}

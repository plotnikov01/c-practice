#include <stdbool.h>
#include <stdio.h>

#define SIZEOF(arr) sizeof(arr) / sizeof(*arr)

void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}

int bubbleSort(int *arr, int arrSize) {
        bool swapped;

        for(int i = 0; i < arrSize; i++) {
                swapped = false;
                for (int j = 0; j < arrSize; j++) {
                        if (arr[j] > arr[j + 1]) {
                                swap(&arr[j], &arr[j + 1]);
                                swapped = true;
                                printArray(arr, arrSize);
                        }
                }

                if (swapped == false) {
                        break;
                }
        }

	return 1;
}

int main() {
	int arr[] = {10, 11, 5, 2, 4, 0, 11};
	int arrSize = SIZEOF(arr);	
	
	bubbleSort(arr, arrSize);

	return 0;
}

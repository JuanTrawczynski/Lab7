#include <stdio.h>

void bubbleSort(int list[], int size);
void selectionSort(int list[], int size);

int main() {
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    // printf("Bubble Sort:\n");
    // printf("array1:\n");
    // bubbleSort(array1, size1);
    // printf("array2:\n");
    // bubbleSort(array2, size2);

    printf("\nSelection Sort:\n");
    printf("array1:\n");
    selectionSort(array1, size1);
    printf("array2:\n");
    selectionSort(array2, size2);

    return 0;
}

void bubbleSort(int list[], int size) {
    int temp, swaps;
    int totalSwaps = 0;

    for (int i = 0; i < size - 1; i++) {
        swaps = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
                swaps++;
            }
        }
        totalSwaps += swaps;
        printf("%d: # of times %d is swapped\n", i + 1, swaps);
    }

    printf("Total number of swaps: %d\n\n", totalSwaps);
}

void selectionSort(int list[], int size) {
    int temp, swaps;
    int totalSwaps = 0;

    for (int current = 0; current < size - 1; current++) {
        swaps = 0;
        int smallest = current;
        for (int walker = current + 1; walker < size; walker++) {
            if (list[walker] < list[smallest]) {
                smallest = walker;
                swaps++;
            }
        }
        if (smallest != current) {
            temp = list[current];
            list[current] = list[smallest];
            list[smallest] = temp;
        }
        totalSwaps += swaps;
        printf("%d: # of times %d is swapped\n", current + 1, swaps);
    }

    printf("Total number of swaps: %d\n\n", totalSwaps);
}
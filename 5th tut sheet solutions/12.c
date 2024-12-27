#include <stdio.h>

void main() {
    int arr[] = {1, 89, 90, 78, 67, 55, 44, 2, 9, 10, 44, 3};
    int length = sizeof(arr) / sizeof(arr[0]);
    int temp;

    //sorting the elements in ascending order using bubble sort
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    //printing the sorted array
    printf("Array sorted in ascending order:\n{%d", arr[0]);
    for (int i = 1; i < length; i++) {
        printf(", %d", arr[i]);
    }
    printf("}\n");
}

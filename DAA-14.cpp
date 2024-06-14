#include <stdio.h>

void find_min_max(int arr[], int n) {
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
}

int main() {
    int arr[] = {12, 45, 7, 23, 56, 89, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("List of numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    find_min_max(arr, n);

    return 0;
}

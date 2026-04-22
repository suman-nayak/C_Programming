#include <stdio.h>

void heapify(int arr[], int n, int i, int order) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (order == 1) {
        if (left < n && arr[left] > arr[largest])
            largest = left;
        if (right < n && arr[right] > arr[largest])
            largest = right;
    } else {
        if (left < n && arr[left] < arr[largest])
            largest = left;
        if (right < n && arr[right] < arr[largest])
            largest = right;
    }

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest, order);
    }
}

void heapSort(int arr[], int n, int order) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i, order);

    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0, order);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n, 1);
    printf("Ascending order: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    int arr2[] = {12, 11, 13, 5, 6, 7};
    heapSort(arr2, n, 0);
    printf("Descending order: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    return 0;
}


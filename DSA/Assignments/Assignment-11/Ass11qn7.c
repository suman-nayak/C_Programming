#include <stdio.h>
void merge(int a[], int lb, int mid, int ub)
{
    int i = lb, j = mid + 1, k = 0;
    int temp[ub - lb + 1];
    while (i <= mid && j <= ub) {
        if (a[i] <= a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
        }
    }
    while (i <= mid) {
        temp[k++] = a[i++];
    }
    while (j <= ub) {
        temp[k++] = a[j++];
    }
    for (i = lb, k = 0; i <= ub; i++, k++) {
        a[i] = temp[k];
    }
}

void merge_sort(int a[], int lb, int ub) {
    if (lb < ub) {
        int mid = (lb + ub) / 2;
        merge_sort(a, lb, mid);
        merge_sort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    merge_sort(a, 0, n - 1);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

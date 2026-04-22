#include<stdio.h>
int getMax(int arr[], int n)
{
    int max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
void count_sort(int arr [], int n, int pos)
{
    int count[10] = {0}, op[n], i;
    for (i = 0; i < n; i++)
    {
        count[(arr[i] / pos) % 10]++;
    }
    for(i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }
    for (i = n - 1; i >= 0; i--)
    {
        op[count[(arr[i] / pos) % 10] - 1] = arr[i];
        count[(arr[i] / pos) % 10]--;
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = op[i];
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void radixSort(int arr[], int n)
{
    int max = getMax(arr, n);
    for (int pos = 1; (max / pos) > 0; pos *= 10)
    {
        count_sort(arr, n, pos);
    }
}
int main() {
    int n;
    printf("Enter the Array Size: ");
    scanf("%d", &n);
    printf("Enter the Original Array: ");
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    radixSort(arr, n);
    printf("Sorted Array: ");
    printArray(arr, n);

    return 0;
}


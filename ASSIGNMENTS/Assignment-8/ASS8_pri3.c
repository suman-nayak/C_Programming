#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements into the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int smallest = arr[0];
    int largest_index = 0;
    int smallest_index = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            largest_index = i;
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallest_index = i;
        }
    }
    printf("\nOriginal array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Largest element: %d at index %d\n", largest, largest_index);
    printf("Smallest element: %d at index %d\n", smallest, smallest_index);
    if (largest_index != smallest_index)
    {
        int temp = arr[largest_index];
        arr[largest_index] = arr[smallest_index];
        arr[smallest_index] = temp;
    }
    printf("\nArray after swapping largest and smallest elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

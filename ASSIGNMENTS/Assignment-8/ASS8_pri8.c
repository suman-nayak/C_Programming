#include <stdio.h>
int main() {
    int size1, size2;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size1; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter the size of the second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size2; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];
    for (int i = 0; i < size1; i++)
    {
        mergedArr[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        mergedArr[size1 + i] = arr2[i];
    }
    printf("\nMerged Array: ");
    for (int i = 0; i < mergedSize; i++) 
    {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
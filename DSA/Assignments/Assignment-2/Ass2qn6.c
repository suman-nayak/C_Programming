/*WAP to allocate memory dynamically for an integer array.
Check whether an inputted element is present in this array or not.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    int n, element, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &element);

    for(int i = 0; i < n; i++) {
        if(arr[i] == element) {
            found = 1;
            break;
        }
    }

    if(found) {
        printf("Element %d is present in the array.\n", element);
    } else {
        printf("Element %d is not present in the array.\n", element);
    }

    free(arr);
    return 0;
}
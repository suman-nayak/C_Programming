#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int search_element;
    printf("Enter the element to search for: ");
    scanf("%d", &search_element);
    int found_index = -1; 
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search_element)
        {
            found_index = i;
            break; 
        }
    }
    if (found_index != -1)
    {
        printf("Element %d found at index %d.\n", search_element, found_index);
    } else
    {
        printf("Element %d not found in the array.\n", search_element);
    }

    return 0;
}
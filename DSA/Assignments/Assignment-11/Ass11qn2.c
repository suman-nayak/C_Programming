#include<stdio.h>
int main ()
{
	int arr[100], n, i, key;
	printf("Enter the value of n:");
	scanf("%d", &n);

	printf("\nEnter the element in the array:");
	for(i = 0; i < 0; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nEnter the element to search: ");
	scanf("%d", &key);

	int high = n - 1;
	int low = 0, mid;

	while(low <= high)
	{
		mid = (high + low) / 2;
		if (arr[mid] == key)
		{
			printf("\nThe element is found at the index %d", mid + 1);
			return 0;
		}
		else if (arr[i] < key)
		{
			high = mid - 1;
		}
		else
		{
			low = high + 1;
		}
	}
}

#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int arr[100], n, i, key;
	printf("Enter the value of n:");
	scanf("%d", &n);

	printf("Enter the element to search: ");
	scanf("%d", &key);

	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
		printf("Enter the element to search: ");
		scanf("%d", &key);

	for(i = 0; i < n; i++){
		if(arr[i] == key)
		{
			printf("\nThe element is present in the array %d:", i+1);
		}

		printf("\nThe element is not found");
		return 0;
	}
}

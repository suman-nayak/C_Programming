#include<stdio.h>
int main ()
{
	int low, high, num, i, j, flag;
	printf("Enter low and high:");
	scanf("%d%d", &low, &high);
	for (i = low; i <= high; i++)
	{
		num = i;
		flag = 0;
		if (num == 1)
			continue;
		for (j = 2; j < num; j++)
		{
			if (num % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("%d \t", num);
	}
	return 0;
}
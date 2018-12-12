#include<stdio.h>

//判别素数
int main()
{
	int w = 0;
	int i = 2;
	int n;
	printf("输入n:");
	scanf("%d", &n);
	int k = n-1;

	//while(i <= k && w == 0)
	while(i <= k)
	{
		if(n % i == 0)
		{
			w = 1;
			printf("i=%10d\n", i);
		}
		else
		{
			printf("%d\n", i);
		}
			i++;
	}
	if(w == 0)
	{
		printf("%d是素数", n);
	}
	else
	{
		printf("%d不是素数", n);
	}
	printf("\n");

	return 0;
}


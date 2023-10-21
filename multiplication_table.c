#include <stdio.h>

int main()
{
	int a[10][10];
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			a[i-1][j-1]=i*j;
			printf("%4d",a[i-1][j-1]);
		}
		printf("\n");

	}

	return 0;
}

#include<stdio.h>
main()
{
	int i,j,K=11;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",K);
			K++;
		}
		printf("\n");
	}
}
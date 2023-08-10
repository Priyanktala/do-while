#include<stdio.h>

main()
{
	int i,n,sum;
	
	printf("Enter Value=");
	scanf("%d",&n);
	
	for(sum=0; i<=n; i++)
	{
		sum=sum+i;
	}
			printf("%d\n",sum);
}
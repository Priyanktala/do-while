#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter Value For=");
	scanf("%d",&n);
	
	do
	{
		printf("%d\n",i);
		i++;
	}while(i<=n);
}
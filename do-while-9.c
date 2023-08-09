#include<stdio.h>

main()
{
	int i=1,n,fact=1;
	
	printf("Enter Value=");
	scanf("%d",&n);
	
	do
	{
		fact=fact*i;
		i++;
	}while(i<=n);
		printf("%d\n",fact);
}
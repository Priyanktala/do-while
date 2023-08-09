#include<stdio.h>

main()
{
	int i,n=1;
	
	printf("Enter Value For=");
	scanf("%d",&i);
	
	do
	{
		printf("%d\n",i);
		i--;
	}while(i>=n);
}
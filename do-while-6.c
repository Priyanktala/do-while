#include<stdio.h>

main()
{
	int i,n=1;
	
	printf("Enter Value For=");
	scanf("%d",&i);
	
	do
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i--;
	}while(i>=n);
}
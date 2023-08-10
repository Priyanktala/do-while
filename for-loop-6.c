#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter Value For=");
	scanf("%d",&i);
	
	for(n=1; i>=n; i--)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
}
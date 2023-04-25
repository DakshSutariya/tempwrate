#include<stdio.h>

main()

{
	int n,a=0;
	
	printf("enter the value=");
	scanf("%d",&n);
	
	do
	{
		n /= 10;
		a++;
	}while(n != 0);
	
	printf("total digits = %d",a);
	
}

#include<stdio.h>
int main()
{
	int a,i,sum=0;
	printf("enter the last number:");
	scanf("%d",&a);
	for( i=2;i<=a;i+=2)
	{
	 sum+=i;
	}
		printf("%d ",sum);
}

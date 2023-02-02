#include<stdio.h>
int main()
{
	int a,i;
	printf("enter the last number");
	scanf("%d",&a);
	for( i=2;i<=a;i+=2)
	{
		printf("%d ",i);
	}
}

#include<stdio.h>
int main()
{
	int a,i,product=1;
	printf("enter the factorial to be calculated=");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		product*=i;
	}
	printf("%d ",product);
}

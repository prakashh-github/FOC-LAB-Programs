#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,i;
	char num[100];
	printf("enter a number");
	gets(num); 
	b=strlen(num);
	for(i=b-1;i>=0;i--)
		printf("%c",num[i]);
}

#include<stdio.h>
int main(){
	int digit,n,t,sum=0;
	printf("Enter a number :");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		digit=n%10;
		n=n/10;
		sum=sum+digit*digit*digit;
	}
	if (sum==t)
	{
		printf("Number is armstrong");
	}else
	{
   printf("Number is not armstrong");
	}
	}


#include<stdio.h>
#include<conio.h>
int main(){
	int a=0,b=1,i,n,next;
	printf("Enter a number");
	scanf("%d",&n);
	printf("%d%d",a,b);
	for(i=0;i<n-1;i++)
	{
		next=a+b;
		printf("%d",next);
		a=b;
		b=next;
	}
}

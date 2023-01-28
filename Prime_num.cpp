#include<stdio.h>
int main(){
	int i,n,flag=0;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n==0||n==1)
	{
		flag++;
	}
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			flag++;
			break;
		}
	}
	if(flag==0){
	
	printf("number is prime");
}
else{
	printf("not a prime number");
}
}



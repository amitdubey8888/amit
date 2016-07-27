#include<stdio.h>
int main()
{
	int num1=0,num2=1,n,i,fib;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	fib=num1+num2;
	printf("%d ",fib);
	for(i=1;i<=n;i++)
	{
		fib=num1+num2;
		num1=num2;
		num2=fib;
		printf("%d ",fib);
	}
	printf("\nFibonacci number(for n = %d) = %d",n,fib);
}

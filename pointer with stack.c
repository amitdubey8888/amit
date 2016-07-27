#include<stdio.h>
#define size 10
void push(int i);
int pop();
int *tos,*p1,stack[size];
int main()
{
	int value;
	tos=stack;
	p1=stack;
	do
	{
		printf("Enter value:\n");
		scanf("%d",&value);
		if(value!=0) push(value);
		else printf("value on top is %d\n",pop());
	}while(value!=-1);
	return 0;
}
void push(int i)
{
	p1++;
	if(p1==(tos+size))
	{
		printf("Stack overflow.\n");
		exit(1);
	}
	*p1=1;
}
int pop()
{
	if(p1==tos)
	{
		printf("Stack underflow.");
		exit(1);
	}
	p1--;
	return *(p1+1);
}

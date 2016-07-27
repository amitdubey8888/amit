#include<stdio.h>
int main()
{
	int num,c,r,i,p;
	printf("Enter number:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		r=i;
		while(r>0)
		{
			p=r%10;
			r=r/10;
			if(p==0)
			{
				c++;
				printf("\nNumber having zero: %d",i);
				break;
			}
		}
	}
printf("\nTotal number having zero: %d",c);
}

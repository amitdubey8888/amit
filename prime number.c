#include<stdio.h>
int main()
{
	int n,m=1,c=0,i;
	printf("Enter number limit:");
	scanf("%d",&n);
	printf("prime number: ");
	while(m<=n)
	{
		for(i=1;i<=m;i++)
		{
			if(m%i==0)
			{
				c++;
			}
		}
	if(c==2) printf("%d ",m);
	m++;
	c=0;
	}
}

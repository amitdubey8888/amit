#include<stdio.h>
int main()
{
while(1)
{
	int i,x,y,gcd=1;
	printf("\nEnter two number....\n");
	scanf("%d%d",&x,&y);
	if(x==0 || y==0) 
	{
	printf("Gcd of given number 0.");
    }
    else
    {
	for(i=2;i<=x;i++)
    {
		while(1)
		{
		if((x%i)==0 && (y%i)==0)
		{
			x=x/i;
			y=y/i;
			gcd=gcd*i;
		}
		else
		{
			break;
		}
	    }
	}
	printf("\nGcd of two number:%d\n",gcd);
   }  
}
	return 0;
}

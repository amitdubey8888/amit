#include<stdio.h>
int main()
{
	int c,n,i,j;
	float u[100],p[100],w[100],x[100],profit,temp,temp1,temp2;
	printf("Enter number of item...\n");
	scanf("%d",&n);
	printf("\nEnter weight of item...\n");
	for(i=0;i<n;i++) scanf("%f",&w[i]);
	printf("\nEntre price of item...\n");
	for(i=0;i<n;i++) scanf("%f",&p[i]);
	printf("\nEnter capacity of item...\n");
	scanf("%d",&c);
	printf("\nCalculating unit price of item...\n");
	for(i=0;i<n;i++) u[i]=p[i]/w[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(u[j]>u[j+1])
			{
			temp=u[j];
			u[j]=u[j+1];
			u[j+1]=temp;
			
			temp1=p[j];
			p[j]=p[j+1];
			p[j+1]=temp1;
			
			temp2=w[j];
			w[j]=w[j+1];
			w[j+1]=temp2;
		    }
		}
	}
	printf("\nAfter sorting according to unit price...\n");
	for(i=0;i<n;i++)
	{
	printf("%0.2f ",u[i]);
    }
    for(i=1;i<n;i++) x[i]=0.0;
    for(i=1;i<n;i++)
    {
    	if(w[i]<c)
    	{
    		x[i]=1.0;
    		c=c-w[i];
		}
		else break;
	}
	if(i<=n) 
	{
	x[i]=c/w[i];
    }
    profit=0.0;
    for(i=0;i<n;i++)
    {
    	profit=profit+x[i]*p[i];
	}
	printf("\n\nProfit = %0.2f",profit);
	return 0;
}


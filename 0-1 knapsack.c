#include<stdio.h>
int max(int a, int b) { return (a > b)? a : b; }
int knapsack(int c,int w[],int p[],int n)
{
	int i,j,a[100][100];
	for(i=0;i<=n;i++)
	{
		a[0][i]=0;
	}
	for(j=1;j<=n;j++)
	{
		a[j][0]=0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(w[i]<=j)
			{
				a[i][j]=max(a[i-1][j],a[i-1][j-w[i]]+p[i]);
			}
			else
			{
				a[i][j]=a[i-1][j];
			}
		}
	}
return a[n][c];
}
 
int main()
{
	int n,i,c,p[100],wt[100];
	printf("Enter number of item:");
	scanf("%d",&n);
	printf("Enter price of item:\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("Enter weight of item:\n");
	for(i=1 ;i<=n;i++)
	{
		scanf("%d",&wt[i]);
	}
	printf("Enter capacity:");
	scanf("%d",&c);
    printf("Maximum Price= %d", knapsack(c, wt, p, n));
    return 0;
}

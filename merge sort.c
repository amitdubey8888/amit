#include<stdio.h>
int main()
{
	int a[10],b[10],c[20];
	int i,j,k,m,n;
	i=0;
	j=0;
	printf("Enter size of array first: ");
	scanf("%d",&m);
	printf("Enter array element: \n");
	for(i=0;i<m;i++) scanf("%d",&a[i]);
	printf("Enter size of array second: ");
	scanf("%d",&n);
	printf("Enter array element: \n");
	for(j=0;j<n;j++) scanf("%d",&b[j]);
	i=0;
	j=0;
	k=0;
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	while(i<m)
	{
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<n)
	{
		c[k]=b[j];
		k++;
		j++;
	}
	printf("\nArray after sorting: ");
	for(i=0;i<(m+n);i++) printf("%d ",c[i]);
	return 0;
	
}

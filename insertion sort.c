#include<stdio.h>
int main()
{
	int a[10];
	int i,j,n,key;
	printf("Enter array size: ");
	scanf("%d",&n);
	printf("Enter array element: \n");
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	printf("Array before sorting: ");
	for(i=0;i<n;i++) printf("%d ",a[i]);
	for(i=0;i<n;i++) 
	{
		key=a[i];
		j=i-1;
		while(j>=0 && key < a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	printf("\nArray after sorting: ");
	for(i=0;i<n;i++) printf("%d ",a[i]);
	return 0;
	
}

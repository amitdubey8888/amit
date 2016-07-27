#include<stdio.h>
int partition(int a[100],int x,int y);
void quicksort(int a[100],int x,int y);
int main()
{
	int i,n,low,high;
	int a[100];
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("\nEnter array element: \n");
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	printf("\nArray before sorting: ");
	for(i=0;i<n;i++) printf("%d ",a[i]);
	quicksort(a,0,n-1);
	printf("\n\nArray after sorting: ");
	for(i=0;i<n;i++) printf("%d ",a[i]);
	return 0;
	
}
void quicksort(int a[],int low,int high)
{
	    int j;
		if(low<=high)
		{
		j=partition(a,low,high);
		quicksort(a,low,j-1);
		quicksort(a,j+1,high);
     	}
}
int partition(int a[],int low,int high)
{
	int p,q,key,temp;
	key=a[low];
	p=low;
	q=high;
	while(p<q)
	{
		while(a[p]<=key)
		{
			p++;
		}
		while(a[q]>key)
		{
			q--;
		}
		if(p<q)
		{
		temp=a[p];
		a[p]=a[q];
		a[q]=temp;
	    }
    }
	    
		a[p]=a[q];
		a[q]=key;
    
	return q;
}

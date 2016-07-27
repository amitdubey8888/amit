#include<stdio.h>
int binarysearch(int a[],int,int,int);
int main()
{
	int a[10],i,n,val,low,high,pos;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	printf("\nEnter value which u want to search: ");
	scanf("%d",&val);
	low=0;
	high=n-1;
	pos=binarysearch(a,low,high,val);
	printf("Value found at position: %d",pos);
	return 0;
}
int binarysearch(int a[],int low,int high,int val)
{
	if(low<=high)
	{
		int mid,pos;
		mid=(low+high)/2;
		if(a[mid]==val)
		{
		    return (pos=mid);
		}
		else if(a[mid]<val)
		{
			binarysearch(a,(mid+1),high,val);
		}
		else if(a[mid]>val)
		{
			binarysearch(a,low,(mid-1),val);
		}
	}
}

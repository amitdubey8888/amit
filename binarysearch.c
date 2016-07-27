#include<stdio.h>
int main()
{
	int a[10],i,n,val,low,high,mid,pos,flag=0;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	printf("\nEnter value which u want to search: ");
	scanf("%d",&val);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==val)
		{
			flag=1;
			pos=mid;
			break;
		}
		else if(a[mid]<val)
		{
			low=mid+1;
		}
		else if(a[mid]>val)
		{
			high=mid-1;
		}
	}
	if(flag==1) printf("\nValue found at position: %d",pos);
	else printf("\nValue not in array which u want to search.");
	return 0;
}

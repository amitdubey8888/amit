#include<stdio.h>
void swap(int a[],int left,int right)
{
	int temp;
	temp=a[left];
	a[left]=a[right];
	a[right]=temp;
}
void quicksort(int a[],int low,int high)
{
	int pivot;
	if(high>low)
	{
		pivot=partition(a,low,high);
		quicksort(a,low,pivot-1);
		quicksort(a,pivot+1,high);
	}
}
int partition(int a[],int low,int high)
{
	int left,right;
	int pivotitem;
	int pivot=left=low;
	pivotitem=a[low];
	right=high;
	while(left<right)
	{
		while(a[left]<=pivotitem) left++;
		while(a[right]>pivotitem) right--;
	    if(left<right) swap(a,left,right);		
    }
    a[low]=a[right];
    a[right]=pivotitem;
	return right;
}
void quicksort(int a[],int ,int);
void printarray(int a[],int);
int main()
{
	int a[20],i,n;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	printf("Unsorted array:\n");
	printarray(a,n);
	quicksort(a,0,n-1);
	printf("\nSorted array:\n");
	printarray(a,n);
	return 0;
}
void printarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++) printf("%d ",a[i]);
} 

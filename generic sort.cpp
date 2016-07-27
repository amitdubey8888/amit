#include<iostream>
using namespace std;
template <class x>
void bubble(x *item,int count)
{
	register int a,b;
	x t;
	for(a=1;a<count;a++)
	 for(b=count-1;b>=a;b--)
	   {
	   	if(item[b-1]>item[b])
	   	   {
	   	   	t=item[b-1];
	   	   	item[b-1]=item[b];
	   	   	item[b]=t;
			  }
	   }
}
int main()
{
	int iarray[7]={1,3,7,5,6,4,2};
	double darray[5]={4.3,5.6,7.6,9.8,1.2};
	int i;
	cout<<"Here is unsorted intger array:";
	for(i=0;i<7;i++)
	       cout<<iarray[i]<<' ';
	       cout<<endl;
	cout<<"Here is unsorted double array:";
	for(i=0;i<5;i++)
	       cout<<darray[i]<<' ';
	       cout<<endl;
	bubble(iarray,7);
	bubble(darray,5);
	cout<<"Here is sorted intger array:";
	for(i=0;i<7;i++)
	       cout<<iarray[i]<<' ';
	       cout<<endl;
	cout<<"Here is sorted double array:";
	for(i=0;i<5;i++)
	       cout<<darray[i]<<' ';
	       cout<<endl;
	return 0;
}

#include<iostream>
using namespace std;
template<class x>
void compact(x *item,int count,int start,int end)
{
	register int i;
	for(i=end+1;i<count;i++,start++)
	item[start]=item[i];
	for(;start<count;start++) item[start]=(x) 0;
}
int main()
{
	int num[7]={0,1,2,3,4,5,6};
	char str[18]="generic function";
	int i;
	cout<<"Here is uncompacted integer array:";
	for(i=0;i<7;i++)
	cout<<num[i]<<' ';
	cout<<endl;
	cout<<"Here is uncompacted string:";
	for(i=0;i<18;i++)
	cout<<str[i]<<' ';
	cout<<endl;
	compact(num,7,2,4);
	compact(str,18,6,10);
	cout<<"Here is compacted integer array:";
	for(i=0;i<7;i++)
	cout<<num[i]<<' ';
	cout<<endl;
	cout<<"Here is compacted string:";
	for(i=0;i<18;i++)
	cout<<str[i]<<' ';
	cout<<endl;
	return 0;
}

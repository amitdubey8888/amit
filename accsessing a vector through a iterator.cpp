#include<iostream>
#include<vector>
#include<cctype>
using namespace std;;
int main()
{
	vector<char> v(10);
	vector<char>::iterator p;
	int i;
	p=v.begin();
	i=0;
	while(p!=v.end())
	{
		*p=i+'a';
		p++;
		i++;
	}
	cout<<"Original contents:"<<endl;
	p=v.begin();
	while(p!=v.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	p=v.begin();
	while(p!=v.end())
	{
		*p=toupper(*p);
		p++;
	}
	cout<<"Modified contents:"<<endl;
	p=v.begin();
	while(p!=v.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	return 0;
}

#include<iostream>
#include<cstdlib>
#include<new>
using namespace std;
class loc
{
	int longitude,latitude;
	public:
		loc() 
		{
		}
		loc(int i,int j)
		{
			longitude=i;
			latitude=j;
		}
		void show()
		{
			cout<<longitude<<" ";
			cout<<latitude<<endl;
		}
};
void *operator new(size_t size)
{
	void *p;
	cout<<"In overloading new."<<endl;
	p=malloc(size);
	if(!p)
	{
		bad_alloc ba;
		throw ba;
	}
	return p;
}
void operator delete(void *p)
{
	cout<<"In overloaded delete."<<endl;
	free(p);
}
int main()
{
	loc *p1,*p2;
	float *fp;
	try
	{
		p1=new loc(10,20);
	}
	catch(bad_alloc xa)
	{
		cout<<"Allocation failure."<<endl;
		return 1;
	}
	try
	{
		p2=new loc(20,30);
	}
	catch(bad_alloc xa)
	{
		cout<<"Allocation failure.";
		return 1;
	}
	try
	{
		fp=new float;
	}
	catch(bad_alloc xa)
	{
		cout<<"Allocation failure."<<endl;
		return 1;
	}
	*fp=10.2544F;
	cout<<*fp<<endl;
	p1->show();
	p2->show();
	delete p1;
	delete p2;
	delete fp;
	return 0;
}


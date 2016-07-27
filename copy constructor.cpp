#include<iostream>
#include<cstdlib>
using namespace std;
class array
{
	int *p;
	int size;
	public:
		array(int sz)
		{
			try
			{
			p=new int[sz];
			}
			catch(bad_alloc xa)
			{
				cout<<"Allocation failure."<<endl;
				exit(EXIT_FAILURE);
			}
			size=sz;
		}
		~array() {delete [] p;}
		array(const array &a);
		void put(int i,int j)
		{
			if(i>=0 && i<size) p[i]=j;
		}
		int get(int i)
		{
			return p[i];
		}
};
array::array(const array &a)
{
	int i;
	try
	{
		p=new int[a.size];
	}
	catch(bad_alloc xa)
	{
		cout<<"Allocation failure"<<endl;
		exit(EXIT_FAILURE);
	}
	for(i=0;i<a.size;i++) p[i]=a.p[i];
}
int main()
{
	array num(10);
	int i;
	for(i=0;i<10;i++) num.put(i,i);
	for(i=9;i>=0;i--) cout<<num.get(i)<<" ";
	cout<<endl;

array x(num);
for(i=0;i<10;i++) cout<<x.get(i)<<" ";
return 0;
}

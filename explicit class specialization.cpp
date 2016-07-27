#include<iostream>
using namespace std;
template <class t> 
class myclass
{
	t x;
	public:
		myclass(t a)
		{
			cout<<"Inside generic myclass"<<endl;
			x=a;
		}
		t getx() {return x;}
};
template <> class myclass<int>
{
	int x;
	public:
		myclass(int a)
		{
			cout<<"Inside myclass <int> specialization"<<endl;
			x=a*a;
		}
		int getx() {return x;}
};
int main()
{
	myclass<double> d(10.10);
	cout<<"Double:"<<d.getx()<<endl;
	myclass<int> i(5);
	cout<<"Integer:"<<i.getx();
	return 0;
}

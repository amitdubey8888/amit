#include<iostream>
using namespace std;
class base
{
	public:
		virtual void vfunc()
		{
			cout<<"This is base's v function."<<endl;
		}
};
class derived1:public base
{
	public:
		void vfunc()
		{
			cout<<"This is derived1's v function."<<endl;
		}
};
class derived2:public base
{
	public:
		void vfunc()
		{
			cout<<"This is derived2's v function."<<endl;
		}
};
void f(base &r)
{
	r.vfunc();
}
int main()
{
	base b;
	derived1 ob1;
	derived2 ob2;
	f(b);
	f(ob1);
	f(ob2);
	return 0;
}

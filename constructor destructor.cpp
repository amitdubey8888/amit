#include<iostream>
using namespace std;
class myclass
{
int i;
public:
myclass(int n);
~myclass();
void set(int n) {i=n;}
int get()  {return i;}
};
myclass::myclass(int n)
{
	i=n;
	cout<<"Constructing "<<i<<endl;
}
myclass::~myclass()
{
	cout<<"Destructing "<<i<<endl;
}
void f(myclass ob);
int main()
{
myclass ob(1);
f(ob);
cout<<"This is i in main: "<<ob.get()<<endl;
return 0;
}
void f(myclass oo)
{
	oo.set(2);
	cout<<"This is local i: "<<oo.get()<<endl;
}

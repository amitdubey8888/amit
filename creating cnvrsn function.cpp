#include<iostream>
using namespace std;
class pwr
{
	double b;
	int e;
	double val;
	public:
		pwr(double base, int exp);
		pwr operator+(pwr o)
        {
         	double base;
         	int exp;
         	base=b+o.b;
         	exp=e+o.e;
         	pwr temp(base, exp);
         	return temp;
		}
	operator double()
	{
		return val;
	}
};
pwr::pwr(double base,int exp)
{
	b=base;
	e=exp;
	val=1;
	if(exp==0) return;
	for(;exp>0;exp--) val=val*b;
}
int main()
{
	pwr x(4.2,2);
	double a;
	a=x;
	cout<<x+100.2<<endl;
    pwr y(3.3,3),z(0,0);
	z=x+y;
	a=x;
	cout<<a;
	return 0;	
}
